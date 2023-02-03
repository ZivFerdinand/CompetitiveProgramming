#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct electronicData
{
    char name[100];
    char type[50];
    int price;
    int stock;
};

electronicData electronics[500];
int electronicsCount = 0, weightCount = 0;

int binSer(char rand[])
{
    int left = 0, right = electronicsCount - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if(strcmp(rand, electronics[mid].name) == 0)
        {
            return mid;
        }
        else if(strcmp(rand, electronics[mid].name) == 1)
        {
            left = mid + 1;
        }
        else
            right=mid-1;
    }
    return -1;
}

int checkWeight(const char rand[])
{
    if (!strcmp(rand, "Big"))
    {
        return 4;
    }
    else if(!strcmp(rand, "Medium"))
        return 2;
    else
        return 1;
}

int inpInt()
{
    char rand[100] = {};
    int satisfied = 0;
    do
    {
        satisfied = 1;
        scanf("%[^\n]", rand);
        getchar();

        for (int i = 0; i < strlen(rand);i++)
        {
            if(rand[i] < '0' && rand[i] > '9')
            {
                satisfied = 0;
                break;
            }
        }
    } while (!satisfied || strlen(rand) < 0);
    return atoi(rand);
}

void inpStr(char rand[])
{
    do
    {
        scanf("%[^\n]", rand);
        getchar();
    } while (strlen(rand) < 0);
    
}

void readFile()
{
    FILE *fd = fopen("electronic.txt", "r");
    char rand[1000];

    fscanf(fd, "%[^\0]", rand);
    if(strlen(rand) <= 0 || fd == NULL)
        return;

    fd = fopen("electronic.txt", "r");
    while(!feof(fd))
    {
        fscanf(fd, "%[^#]#%[^#]#%d#%d\n", electronics[electronicsCount].name, electronics[electronicsCount].type, &electronics[electronicsCount].price, &electronics[electronicsCount].stock);

        weightCount += checkWeight(electronics[electronicsCount].type) * electronics[electronicsCount].stock;

        electronicsCount++;
    }
}

void printFile()
{
    for (int i = 0; i < electronicsCount;i++)
    {
        printf("%s %s %d %d\n", electronics[i].name, electronics[i].type, electronics[i].price, electronics[i].stock);
    }
}

int main()
{
    readFile();
    //printFile();
    int menu = 0;
    do
    {
        system("cls");
        printf("Electronics 2.0!\n ===============\n 1. Insert Electronic Stock\n 2. View Electronic List\n 3. Sell Electronic\n 4. Exit\n >> ");
        do
        {
            menu = inpInt();
        } while (menu < 1 || menu > 4);
        
        if(menu == 1)
        {
            printf("Select this two option\n 1. Insert new item\n 2. Add existing item stock\n 0. Back\n >> ");
            int choice;
            do
            {
                choice = inpInt();
            } while (choice < 1 || choice > 2);

            if(choice == 1)
            {
                int satisfied = 0, found;
                do
                {
                    satisfied = 1;
                    printf(" Input Item Name [5 - 25 Characters | Unique]: ");
                    inpStr(electronics[electronicsCount].name);
                    found = binSer(electronics[electronicsCount].name);
                } while (found != -1 || strlen(electronics[electronicsCount].name) < 5 || strlen(electronics[electronicsCount].name) > 25);
                
                do
                {
                    satisfied = 1;
                    printf(" Input Item Type [Small | Medium | Big]: ");
                    inpStr(electronics[electronicsCount].type);

                    satisfied = strcmp(electronics[electronicsCount].type, "Big") != 0 && strcmp(electronics[electronicsCount].type, "Medium") != 0 && strcmp(electronics[electronicsCount].type, "Small") != 0;
                } while (satisfied);
                
                do
                {
                    printf(" Input Item Price [Max 1500000]: ");
                    electronics[electronicsCount].price = inpInt();
                } while (electronics[electronicsCount].price < 0 || electronics[electronicsCount].price > 1500000);

                satisfied = 0;
                do
                {
                    if(satisfied)
                    {
                        printf(" Input stock is more than available Capacity [%d spaces]!\n", 150 - weightCount);
                    }
                    satisfied = 1;
                    printf(" Input Item Stock [more than 0]: ");
                    electronics[electronicsCount].stock = inpInt();
                    if(150 >= checkWeight(electronics[electronicsCount].type) * electronics[electronicsCount].stock + weightCount)
                    {
                        weightCount += checkWeight(electronics[electronicsCount].type) * electronics[electronicsCount].stock;
                        break;
                    }
                } while (true);
                electronicsCount++;
                printf(" Successfully inserted new item!\n Press enter to continue...\n");
            }
            else
            {
                int satisfied = 0, found, n;
                printFile();
                do
                {
                    if(!satisfied)
                    {
                        printf(" Please input existing Electronic Name!\n");
                    }
                    satisfied = 1;
                    printf(" Input Electronic Name you want to add stock [Input \"back\" to back]: ");
                    inpStr(electronics[electronicsCount].name);
                    found = binSer(electronics[electronicsCount].name);
                    printf("%d\n", found);
                } while (found == -1 && strcmp(electronics[electronicsCount].name, "back") != 0);

                if(strcmp(electronics[electronicsCount].name, "back") == 0)
                {
                    continue;
                }

                satisfied = 0;
                do
                {
                    if(satisfied)
                    {
                        printf(" Input stock is more than available Capacity [%d spaces]!\n", 150 - weightCount);
                    }
                    satisfied = 1;
                    printf(" Input Item Stock [more than 0]: ");
                    n = inpInt();
                    if(150 >= checkWeight(electronics[electronicsCount].type) * (n+electronics[electronicsCount].stock) + weightCount)
                    {
                        weightCount += checkWeight(electronics[electronicsCount].type) * (n+electronics[electronicsCount].stock);
                        break;
                    }
                } while (true);

                printf(" Successfully add stock!\n Press enter to continue...\n");
            }
        }

        getchar();
    } while (menu!=4);
    
}