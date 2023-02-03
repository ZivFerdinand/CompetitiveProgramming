#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include <string.h>

char ID[100][15]={};
char name[100][30] = {};
char type[100][10] = {};
char temp[200] = {};

int price[100];
int productsCount = 0;

void nameInput(int thisIndex)
{
    do{
        printf("Product name [not empty]: ");
        scanf("%[^\n]", temp);                
        getchar();
    } while (strlen(temp) <= 0);

    strcpy(name[thisIndex], temp);
}

void typeInput(int thisIndex)
{
    do{
        printf("Product type [Food | Beverage | Cosmetics | Others] (case sensitive): ");
        scanf("%[^\n]", temp);
        getchar();
    } while ((strcmp("Food", temp)) && (strcmp("Beverage", temp)) && (strcmp("Cosmetics", temp)) && (strcmp("Others", temp)));

    strcpy(type[thisIndex], temp);
}

void priceInput(int thisIndex)
{
    int satisfied;
    do{
        printf("Product price [more than 0]: ");
        scanf("%[^\n]", temp);                
        getchar();

        satisfied = 1;
        for (int i = 0; i < strlen(temp);i++)
        {
            if((temp[i] < 48) || temp[i] > 57)
            {
                satisfied = 0;
                break;
            }
        }

        if(satisfied)
        {
            price[thisIndex] = 0;
            for (int i = 0; i < strlen(temp);i++)
            {
                price[thisIndex] *= 10;
                price[thisIndex] += (int)temp[i] - 48;
            }
        }

        if(!price[thisIndex])
            satisfied = 0;

    } while (!satisfied);
}

int choiceInput()
{
    int choice = 0;
    int satisfied;
    do{
        printf("Input product number [1..%d]: ", productsCount);
        scanf("%[^\n]", temp);                
        getchar();

        satisfied = 1;
        for (int i = 0; i < strlen(temp);i++)
        {
            if((temp[i] < 48) || temp[i] > 57)
            {
                satisfied = 0;
                break;
            }
        }

        if(satisfied)
        {
            for (int i = 0; i < strlen(temp);i++)
            {
                choice *= 10;
                choice += (int)temp[i] - 48;
            }
        }

        if(!choice || choice > productsCount)
            satisfied = 0;

    } while (!satisfied);

    return choice;
}

void deleteInput(int thisIndex)
{
    productsCount--;
    for (int i = thisIndex; i < productsCount;i++)
    {
        strcpy(ID[i], ID[i + 1]);
        strcpy(name[i], name[i + 1]);
        strcpy(type[i], type[i + 1]);

        price[i] = price[i + 1];
    }
}

int charsRandom()
{
    int randInt = rand() % 63;

    if(randInt>36)
    {
        randInt -= 36;
        return randInt + 64;
    }
    else if(randInt>10)
    {
        randInt -= 10;
        return randInt + 96;
    }
    else
        return randInt + 47;
}

void printLines(int length)
{
    for (int i = 0; i < length;i++)
        printf("-");
}

void printHeader()
{
    printf("+");
    printLines(5);
    printf("+");
    printLines(12);
    printf("+");
    printLines(27);
    printf("+");
    printLines(17);
    printf("+");
    printLines(22);
    printf("\n");
}

void printData()
{
    printHeader();
    printf("| %--4s| %--11s| %--26s| %--16s| %--20s|\n", "No.", "ID", "Name", "Type", "Price");

    printHeader();
    for (int i = 0; i < productsCount;i++)
    {
        printf("| %03d | %--11s| %--26s| %--16s| IDR%16d |\n", i+1, ID[i], name[i], type[i], price[i]);
    }
    printHeader();
}

int main()
{
    srand(time(0));
    int menu = 0;

    do{
        system("cls");
        if(productsCount)
        {
            printData();
        }
        else
        {
            printf("No products...");
        }

        printf("\n\n1. Create Product\n2. Update Product\n3. Delete Product\n4. Exit\n> ");
        scanf("%d", &menu);
        getchar();

        
        system("cls");
        if(menu == 1)
        {
            printf("+-------------+\n| Create Menu |\n+-------------+\n");

            nameInput(productsCount);
            typeInput(productsCount);
            priceInput(productsCount);

            for (int i = 0; i < 10;i++)
            {
                ID[productsCount][i] = charsRandom();
            }
            productsCount++;

            printf("Create Product Success!");
            
            getchar();
        }
        else if(menu == 2 && productsCount)
        {
            printf("+-------------+\n| Update Menu |\n+-------------+\n\n");
            printData();

            int choice = choiceInput();

            nameInput(choice-1);
            typeInput(choice-1);
            priceInput(choice-1);

            printf("Update Product Success!");
            
            getchar();
        }
        else if(menu == 3 && productsCount)
        {

            printf("+-------------+\n| Delete Menu |\n+-------------+\n");
            printData();

            int choice = choiceInput();

            deleteInput(choice - 1);

            printf("Delete Product Success!");
            
            getchar();
        }
    } while (menu != 4);
}
