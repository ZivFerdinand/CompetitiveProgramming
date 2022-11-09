#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct gameData{
    char code[50];
    char name[50];
    char type[50];
    int price;
    int quanitity;
};

gameData games[1000];
int gamesCount = 0;

void inputTypeName(int index, int type)
{
    char rand[50];
    if(index == 1)
        strcpy(rand, "MOBA");
    if(index == 2)
        strcpy(rand, "FPS");
    if(index == 3)
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
    }

    fclose(fd);
}

int main()
{
    readFile();
    for (int i = 0; i < gamesCount; i++)
    {
        printf("%s %s %s %d %d\n", games[i].code, games[i].name, games[i].type, games[i].price, games[i].quanitity);
    }
    int menu;
    do
    {
        printf(" Stiim\n =====\n 1. Add Game\n 2. View Game\n 3. Purchase Game\n 4. Exit\n >> ");
        do{
            menu = inputInt();
        } while (menu < 0 || menu > 4);

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

            gamesCount++;
            printf("Press enter to continue...\n");
        }
        else if(menu == 2)
        {

        }
        getchar();
    } while (menu != 4);
} 