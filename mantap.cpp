#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

struct boughtItem{
    int itemIndex;
    int quantity;
};

struct itemData{
    char code[50];
    char name[50];
    int type;
    int price;
    int quantity;
};

itemData items[1000];
int itemsCount = 0;

int readInt()
{
    char rand[1000] = {};
    int satisfied = 1;
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
    } while (strlen(rand) <= 0 || !satisfied);
    return atoi(rand);
}

void readStr(char rand[])
{
    do
    {
        scanf("%[^\n]", rand);
        getchar();
    } while (strlen(rand) <= 0);
}

void readFile()
{
    FILE *fd = fopen("testdata.in", "r");
    char temp[2000000] = {};

    // Check if file exists
    if(fd == NULL)
    {
        return;
    }

    // Check if given file consists of at least a character
    fscanf(fd, "%[^\0]", temp);
    if (!strlen(temp))
    {
        return;
    }

    fclose(fd);
    fd = fopen("testdata.in", "r");

    char a[100] = {}, b[100] = {};
    while(!feof(fd))
    {
        /* TE-413-ZX/Telephone/1/25000/50 */ 
        fscanf(fd, "%[^/]/%[^/]/%d/%d/%d\n", a,b, &items[itemsCount].type, &items[itemsCount].price, &items[itemsCount].quantity);
        strcpy(items[itemsCount].code, a);
        strcpy(items[itemsCount].name, b);
        printf("%s %s %d %d %d\n", items[itemsCount].code, items[itemsCount].name, items[itemsCount].type, items[itemsCount].price, items[itemsCount].quantity);
        itemsCount++;
    }
    fclose(fd);
}

void printFile()
{
    printf("=====================================================================================================\n");
	printf("| [No.]  Item-Code       Item-Name            Item-Type              Item-Price        Item-Quantity|\n");
	printf("=====================================================================================================\n");
	if(itemsCount == 0)
	{
		printf("No data available\n");
	}
	else
	{
		for(int i = 0; i < itemsCount; i++)
		{
			printf("| [%2d.] %10s %15s %25d %19d %18d |\n", i + 1, items[i].code, items[i].name, items[i].type, items[i].price, items[i].quantity);
		}
		printf("=====================================================================================================\n");
	}
}

void quickSort(int low, int high)
{
    if(low == -1 || high == -1 || low>=high)
        return;

    int i = low - 1;
    int j = low;
    char pivot[50];
    strcpy(pivot, items[high].name);

    itemData temp;
    while(j<high)
    {
        if(strcmp(pivot,items[j].name) == 1)
        {
            i++;
            temp = items[i];
            items[i] = items[j];
            items[j] = temp;
        }
        j++;
    }

    i++;
    temp = items[i];
    items[i] = items[high];
    items[high] = temp;

    quickSort(low, i - 1);
    quickSort(i + 1, high);
}

void generateCode()
{
    char temp[50];
    strcpy(temp, items[itemsCount].name);
    strcpy(items[itemsCount].code, "XX-YYY-ZZ");

    items[itemsCount].code[0] = toupper(temp[0]);
    items[itemsCount].code[1] = toupper(temp[1]);

    items[itemsCount].code[3] = 48 + (rand() % 10);
    items[itemsCount].code[4] = 48 + (rand() % 10);
    items[itemsCount].code[5] = 48 + (rand() % 10);

    items[itemsCount].code[7] = 65 + (rand() % 26);
    items[itemsCount].code[8] = 65 + (rand() % 26);
}
int main()
{
    srand(time(0));
    readFile();
    quickSort(0, itemsCount - 1);

    int menu;
    do
    {
        system("cls");
        printf("Welcome to ShoPAI\n===========\n");
        printf("1. Add New Item\n2. View Items\n3. Purchase Items\n4. Exit\n>> ");
        do
        {
            menu = readInt();
        } while (menu < 1 && menu > 4);

        system("cls");
        if(menu == 1)
        {
            printf("1. Households Appliances\n2. Utility\n3. Toys\n");
            do
            {
                printf("Which item type do you wanna add? [1-3] : ");
                items[itemsCount].type = readInt();
            } while (items[itemsCount].type < 1 || items[itemsCount].type > 3);

            do{
                printf("Input item's name [5 - 20 characters] : ");
                readStr(items[itemsCount].name);
            } while (strlen(items[itemsCount].name) < 5 || strlen(items[itemsCount].name) > 20);

            do{
                printf("Input item's price [15.000 - 300.000] : ");
                items[itemsCount].price = readInt();
            } while (items[itemsCount].price < 15000 || items[itemsCount].price > 300000);

            
            do{
                printf("Input item's quantity [must be more than 0] : ");
                items[itemsCount].quantity = readInt();
            } while (items[itemsCount].quantity <= 0);

            generateCode();

            itemsCount++;
            quickSort(0, itemsCount - 1);
        }
        else if(menu == 2)
        {
            if(itemsCount)
                printFile();
            else
                printf("No items available...\n");
        }
        else if(menu == 3)
        {
            if(itemsCount <= 0)
            {
                printf("No items available...\n");
                continue;
            }
            printFile();

            int choice, qty;
            boughtItem boughtItems[100];
            int boughtItemCount = 0;
            do{
                do{
                    printf("Input item's number to buy [ 1 - %d ] : ", itemsCount);
                    choice = readInt();
                } while (choice <= 0 || choice > itemsCount);

                choice--;
                if(items[choice].quantity == 0)
                {
                    printf("This item is sold out...\n");
                    getchar();
                    continue;
                }
                do{
                    printf("Input item's quantity to buy : ", itemsCount);
                    qty = readInt();
                } while (qty <= 0 || qty > items[choice].quantity);
                boughtItems[boughtItemCount].itemIndex = choice;
                boughtItems[boughtItemCount++].quantity = qty;
            } while (/*Dia blg yes*/true);
        }

        getchar();
    } while (menu != 4);
}