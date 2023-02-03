#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct gameData{
    char code[50];
    char name[50];
    char type[50];
    int price;
    int quanitity;
};

struct gamePurchase{
    int index;
    int realIndex;
    int quantity;
    char name[50];
    int price;
};

int foundFirst, foundLast, found;

gameData games[1000];
int gamesCount = 0;
void printHeader()
{
    printf(" +======+============+========================+===========+=========+=========+\n");
    printf(" + No.  | GameCode   | Game Name              | Game Type | Price   | Quantity|\n");
    printf(" +======+============+========================+===========+=========+=========+\n");
}
void printFooter()
{
    printf(" +======+============+========================+===========+=========+=========+\n");
}
void viewFile(const char search[], int X)
{
    int check = 0;
    found = 0;
    foundFirst = gamesCount + 1;
    foundLast = -1;
    for (int i = 0; i < gamesCount; i++)
    {
        if (strcmp(games[i].type, search) == 0 || X == 1)
        {
            found = 1;
            if(i<foundFirst)
                foundFirst = i;
            
            if(i>foundLast)
                foundLast = i;

            if(!check)
            {
                printHeader();
                check = 1;
            }
            int index = i - foundFirst + 1;
            printf(" | %-4d |  %9s | %21s | %10s | %5d | % 5d |\n", index, games[i].code, games[i].name, games[i].type, games[i].price, games[i].quanitity);
        }
    }

    if(check)
        printFooter();
    else    
    {
        printf("No Games Registered...\nPress Enter to Continue...\n");
    }
}

void randomCode()
{
    strcpy(games[gamesCount].code, "AAAYYYYB");
    games[gamesCount].code[0] = games[gamesCount].type[0];
    
    games[gamesCount].code[1] = games[gamesCount].type[1];
    
    games[gamesCount].code[2] = games[gamesCount].type[2];
    strupr(games[gamesCount].code);
    games[gamesCount].code[3] = (rand() % 9) + 48;
    games[gamesCount].code[4] = (rand() % 9) + 48;
    games[gamesCount].code[5] = (rand() % 9) + 48;
    games[gamesCount].code[6] = (rand() % 9) + 48;
    games[gamesCount].code[7] = (rand() % 26) + 65;
}

void inputTypeName(int index, int type)
{
    char rand[50] = {};
    if(type == 1)
        strcpy(rand, "MOBA");
    if(type == 2)
        strcpy(rand, "FPS");
    if(type == 3)
        strcpy(rand, "Others");

    strcpy(games[index].type, rand);    
}

int inputInt()
{
    char rand[100] = {};
    int satisfied = 0;
    do{
        satisfied = 1;
        scanf("%[^\n]", rand);
        getchar();

        for (int i = 0; i < strlen(rand); i++)
        {
            if(rand[i] < '0' || rand[i] > '9')
            {
                satisfied = 0;
                break;
            }
        }
    } while (!satisfied && strlen(rand) <= 0);

    return atoi(rand);
}

void inputChar(char rand[])
{
    do{
        scanf("%[^\n]", rand);
        getchar();
    } while (strlen(rand) <= 0);
}

void quickSort(int low, int high)
{
    if (low >= high || low == -1 || high == -1)
        return;
    int i = low - 1;
    int j = low;
    char pivot[100];
    strcpy(pivot, games[high].type);

    while (j < high)
    {
        if (strcmp(games[j].type, pivot) <= 0)
        {
            i++;
            gameData temp = games[i];
            games[i] = games[j];
            games[j] = temp;
        }
        j++;
    }
    i++;
    gameData temp = games[high];
    games[high] = games[i];
    games[i] = games[high];

    quickSort(low, i - 1);
    quickSort(i + 1, high);
}

void readFile()
{
    FILE *fd = fopen("games.txt", "r");
    char rand[10000] = {};
    if(fd == NULL)
        return;

    fscanf(fd, "%[^\0]", rand);
    if (strlen(rand) <= 0)
        return;

    fclose(fd);
    fd = fopen("games.txt", "r");

    while(!feof(fd))
    {
        fscanf(fd, "%[^#]#%[^#]#%[^#]#%d#%d\n", games[gamesCount].code, games[gamesCount].name, games[gamesCount].type, &games[gamesCount].price, &games[gamesCount].quanitity);
        gamesCount++;

        quickSort(0, gamesCount);
    }

    fclose(fd);
}
void saveFile()
{
    FILE *fd = fopen("games.txt", "w");
    if(fd == NULL)
        return;

    for (int i = 0; i < gamesCount; i++)
    {
        fprintf(fd, "%s#%s#%s#%d#%d\n", games[i].code, games[i].name, games[i].type, games[i].price, games[i].quanitity);
    }
    fclose(fd);
}

int main()
{
    srand(time(0));
    readFile();
    
    int menu;
    do
    {
        printf(" Stiim\n =====\n 1. Add Game\n 2. View Game\n 3. Purchase Game\n 4. Exit\n >> ");
        do{
            menu = inputInt();
        } while (menu < 0 || menu > 4);

        system("cls");
        if(menu == 1)
        {
            int type;
            do{
                printf(" 1. MOBA\n 2. FPS\n 3. Others\n Choose the Game Type [1-3] : ");
                type = inputInt();
            } while (type < 1 || type > 3);

            inputTypeName(gamesCount, type);

            do{
                printf(" Insert Game Name [3-20 characters] : ");
                inputChar(games[gamesCount].name);
            } while (strlen(games[gamesCount].name) < 3 || strlen(games[gamesCount].name) > 20);

            do{
                printf(" Insert Game Price [10000-10000000] : ");
                games[gamesCount].price = inputInt();
            } while (games[gamesCount].price < 10000 || games[gamesCount].price > 10000000);

            do{
                printf(" Insert Game Quantity [1-200000] : ");
                games[gamesCount].quanitity = inputInt();
            } while (games[gamesCount].quanitity < 1 || games[gamesCount].quanitity > 200000);

            randomCode();
            printf("code : %s\n", games[gamesCount].code);
            gamesCount++;

            quickSort(0, gamesCount);
            printf("Press enter to continue...\n");
        }
        else if(menu == 2)
        {
            printf(" 1. MOBA\n 2. FPS\n 3. Others\n 4. All");
            int choose;
            do{
                printf(" View Type [1-4 | 0 to exit] : ");
                choose = inputInt();
            } while (choose < 0 || choose > 4);

            if(choose == 0)
                continue;
            else if(choose == 1)
                viewFile("MOBA", 0);
            else if(choose == 2)
                viewFile("FPS", 0);
            else if(choose == 3)
                viewFile("Others", 0);
            else if(choose == 4)
                viewFile("All", 1);
        }
        else if(menu == 3)
        {
            char rand[100] = {};
            gamePurchase gamesBuy[50];
            int gamesBuyCount = 0;
            int choose;

            do{   
                printf(" 1. MOBA\n 2. FPS\n 3. Others\n 4. All\n");
                do{
                    printf(" View Type [1-4 | 0 to exit] : ");
                    choose = inputInt();
                } while (choose < 1 || choose > 4);
                
                if(choose == 0)
                    break;
                if(choose == 1)
                    viewFile("MOBA", 0);
                else if(choose == 2)
                    viewFile("FPS", 0);
                else if(choose == 3)
                    viewFile("Others", 0);
                else if(choose == 4)
                    viewFile("All", 1);

                int limit = foundLast - foundFirst + 1;
                do{
                    printf(" Choose a type to view [1-%d]: ", limit);
                    gamesBuy[gamesBuyCount].index = inputInt();
                } while (gamesBuy[gamesBuyCount].index < 1 || gamesBuy[gamesBuyCount].index > limit);
                gamesBuy[gamesBuyCount].realIndex = gamesBuy[gamesBuyCount].index + foundFirst - 1;
                int realIndex = gamesBuy[gamesBuyCount].realIndex;

                do{
                    printf(" Input Quantity [1 - %d]: ", games[realIndex].quanitity);
                    gamesBuy[gamesBuyCount].quantity = inputInt();
                } while (gamesBuy[gamesBuyCount].quantity < 1 || gamesBuy[gamesBuyCount].quantity > games[realIndex].quanitity);
                strcpy(gamesBuy[gamesBuyCount].name, games[realIndex].name);
                gamesBuy[gamesBuyCount].price = games[realIndex].price;
                games[realIndex].quanitity -= gamesBuy[gamesBuyCount].quantity;
                gamesBuyCount++;

                for (int i = 0; i < gamesCount;i++)
                {
                    if(games[i].quanitity == 0)
                    {
                        for (int j = i; j < gamesCount - 1;j++)
                        {
                            games[j] = games[j + 1];
                        }
                        gamesCount--;
                    }
                }   
                printf("Game successfully added to Cart!\n");
                do{
                    printf("Do you want to purchase More Games? [Yes | No (case sensitive)]: ");
                    inputChar(rand);
                } while (strcmp(rand,"Yes") != 0 && strcmp(rand, "No") != 0);
                system("cls");
            } while (strcmp(rand, "Yes") == 0);

            system("cls");
            printf(" Stiim\n =====\n Games Bought: %d\n", gamesBuyCount);
            int totalPrice = 0;
            for (int i = 0; i < gamesBuyCount;i++)
            {
                int price = gamesBuy[i].price * gamesBuy[i].quantity;
                printf("Game Name: %s\n\t%d x %d : %d\n", gamesBuy[i].name, gamesBuy[i].quantity, gamesBuy[i].price, price);
                totalPrice += price;
            }

            int tax = totalPrice / 10;
            printf("Total Price: %d\nTax : %d\nGrand Total: %d\n", totalPrice, tax, totalPrice + tax);
            printf("Thank You For Your Purchase\nPress Enter...\n");
        }
        getchar();
        system("cls");
    } while (menu != 4);

    saveFile();
} 