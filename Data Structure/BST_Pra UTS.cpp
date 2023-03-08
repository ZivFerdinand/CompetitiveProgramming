#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CustomerNode{
    char name[70];
    char membershipName[20];
    CustomerNode *left, *right;
} *custRoot = NULL;

struct MembershipNode{
    char name[20];
    MembershipNode *left, *right;
} *membRoot = NULL;

CustomerNode* createCustomerNode(char name[], char membershipName[])
{
    CustomerNode *newNode = (CustomerNode *)malloc(sizeof(CustomerNode));
    strcpy(newNode->name, name);
    strcpy(newNode->membershipName, membershipName);
    newNode->left = newNode->right = NULL;

    return newNode;
}
MembershipNode* createMembershipNode(char name[])
{
    MembershipNode *newNode = (MembershipNode*)malloc(sizeof(MembershipNode));
    strcpy(newNode->name, name);
    newNode->left = newNode->right = NULL;

    return newNode;
}

CustomerNode* insertCustomerNode(CustomerNode* curr, char name[], char membershipName[])
{
    if(!curr)
    {
        return createCustomerNode(name, membershipName);
    }
    else
    {
        if(strcmpi(curr->name, name) > 0)
        {
            curr->left = insertCustomerNode(curr->left, name, membershipName);
        }
        else if(strcmpi(curr->name, name) < 0)
        {
            curr->right = insertCustomerNode(curr->right, name, membershipName);
        }
        else
        {
            strcpy(curr->membershipName, membershipName);
            printf("MEMBERSHIP UPDATED\n");

            return curr;
        }
    }
}

MembershipNode* insertMembershipNode(MembershipNode* curr, char name[])
{
    if(!curr)
    {
        return createMembershipNode(name);
    }
    else
    {
        if(strcmpi(curr->name, name) > 0)
        {
            curr->left = insertMembershipNode(curr->left, name);
        }
        else if(strcmpi(curr->name, name) < 0)
        {
            curr->right = insertMembershipNode(curr->right, name);
        }
    }
}

void viewCustomerNode(CustomerNode* curr)
{
    if(curr)
    {
        viewCustomerNode(curr->left);
        printf("%s %s\n", curr->name, curr->membershipName);
        viewCustomerNode(curr->right);
    }
}
void viewMembershipNode(MembershipNode* curr)
{
    if(curr)
    {
        viewMembershipNode(curr->left);
        printf("%s ", curr->name);
        viewMembershipNode(curr->right);
    }
}

bool findCustomerNode(CustomerNode* curr, char name[])
{
    if(curr)
    {
        if(strcmpi(curr->name, name) > 0)
        {
            findCustomerNode(curr->left, name);
        }
        else if(strcmpi(curr->name, name) < 0)
        {
            findCustomerNode(curr->right, name);
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
bool findMembershipNode(MembershipNode* curr, char name[])
{
    if(curr)
    {
        if(strcmpi(curr->name, name) > 0)
        {
            findMembershipNode(curr->left, name);
        }
        else if(strcmpi(curr->name, name) < 0)
        {
            findMembershipNode(curr->right, name);
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

CustomerNode* deleteCustomerNode(CustomerNode* curr, char name[])
{
    if(!curr)
    {
        printf("NOT FOUND\n");

        return curr;
    }
    else if(strcmpi(curr->name, name) > 0)
    {
        curr->left = deleteCustomerNode(curr->left, name);
    }
    else if(strcmpi(curr->name, name) < 0)
    {
        curr->right = deleteCustomerNode(curr->right, name);
    }
    else
    {
        if(!curr->left && !curr->right)
        {
            free(curr);
            return NULL;
        }
        else if(!curr->left)
        {
            CustomerNode *temp = curr->right;
            free(curr);
            return temp;
        }
        else if(!curr->right)
        {
            CustomerNode *temp = curr->left;
            free(curr);
            return temp;
        }
        else
        {
            CustomerNode *temp = curr->left;
            while(temp->right)
            {
                temp = temp->right;
            }

            strcpy(curr->name, temp->name);
            strcpy(curr->membershipName, temp->membershipName);

            curr->left = deleteCustomerNode(curr->left, temp->name);
            return curr;
        }
    } 
}

void initialDatabase()
{
    membRoot = insertMembershipNode(membRoot, "Non-Member");
    membRoot = insertMembershipNode(membRoot, "Bronze");
    membRoot = insertMembershipNode(membRoot, "Silver");
    membRoot = insertMembershipNode(membRoot, "Gold");
    membRoot = insertMembershipNode(membRoot, "Platinum");
}

int inputInt(const char text[])
{
    char temp[100] = {};
    do
    {
        printf("%s -> ", text);
        scanf("%[^\n]", &temp);
        getchar();
    } while (strlen(temp) <= 0);

    return atoi(temp);
}

char strInp[100];
void inputStr(const char text[])
{
    char temp[100] = {};
    do
    {
        printf("%s -> ", text);
        scanf("%[^\n]", &temp);
        getchar();
    } while (strlen(temp) < 3 || strlen(temp) > 50);

    strcpy(strInp, temp);
}
void inputStr2(const char text[])
{
    char temp[100] = {};
    do
    {
        printf("%s -> ", text);
        scanf("%[^\n]", &temp);
        getchar();
    } while (!findMembershipNode(membRoot, temp));

    strcpy(strInp, temp);
}

int main()
{
    initialDatabase();
    int choice;
    do{
        system("cls");
        printf("1. Add New Customer\n2. View\n3. Delete\n0. EXIT\n");
        choice = inputInt("Number");

        if(choice == 1)
        {
            printf("[INSERT DATA]\n");
            inputStr("Your Name");
            char tmpName[100];
            strcpy(tmpName, strInp);

            inputStr2("Cust Membership");
            char tmpMemb[100];
            strcpy(tmpMemb, strInp);

            custRoot = insertCustomerNode(custRoot, tmpName, tmpMemb);

            printf("SUCCESSFULLY ADDED!\n");
        }
        else if(choice == 2)
        {
            printf("[DATA]\n");
            viewCustomerNode(custRoot);
            printf("------\n");

        }
        else if(choice == 3)
        {
            printf("[DELETE DATA]\n");
            inputStr("Name to be Deleted");
            char tmpName[100];
            strcpy(tmpName, strInp);

            custRoot = deleteCustomerNode(custRoot, tmpName);

            printf("SUCCESSFULLY PERFORMED DELETION!\n");
        }
        
        getchar();
    } while (choice >= 1 && choice <= 3);
}
