#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct game{
    char name[150];
    int rating;
    int playedHours;

    game *left, *right;
    game *next, *prev;
} *root = 0, *head = 0, *tail = 0;

game* createGame(char name[], int rating, int playedHours)
{
    game *newGame = (game *)malloc(sizeof(game));
    strcpy(newGame->name, name);
    newGame->rating = rating;
    newGame->playedHours = playedHours;

    newGame->left = newGame->right = newGame->next = newGame->prev = NULL;
    return newGame;
}
void insertPrio(char name[], int rating, int playedHours)
{
    game *newNode = createGame(name, rating, playedHours);
    if(!head)
    {
        head = tail = newNode;
    }
    else if(head->rating < rating)
    {
        newNode->next = head;
        head->prev = newNode;

        head = newNode;
    }
    else if(tail->rating >= rating)
    {
        newNode->prev = tail;
        tail->next = newNode;

        tail = newNode;
    }
    else
    {
        // 8 5 3 1
        game *temp = head;
        while(temp->next && (rating <= temp->next->rating))
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        temp->next = newNode;
    }
}
void delPrio(char name[])
{
    if(strcmpi(head->name, name) == 0)
    {
        if(head == tail)
        {
            free(head);
            head = tail = NULL;
        }
        else
        {
            game *temp = head;
            head = head->next;
            head->prev = NULL;

            free(temp);
        }
    }
    else if(strcmpi(tail->name, name) == 0)
    {
        game *temp = tail;
        tail = tail->prev;
        tail->next = NULL;

        free(temp);
    }
    else
    {
        game *temp = head;
        while(temp && (strcmpi(temp->name, name)))
        {
            temp = temp->next;
        }
        game *nextt = temp->next;
        game *prevv = temp->prev;
        prevv->next = nextt;
        nextt->prev = prevv;
        free(temp);
    }
}

int update = 0;
game* insertGameToBST(game* curr, char name[], int rating, int playedHours)
{
    if(!curr)
    {
        update = 1;
        return createGame(name, rating, playedHours);
    }
    else{
        if(strcmpi(name, curr->name) < 0)
        {
            curr->right = insertGameToBST(curr->right, name, rating, playedHours);
        }
        else if(strcmpi(name, curr->name) > 0)
        {
            curr->left = insertGameToBST(curr->left, name, rating, playedHours);
        }
        else if(strcmpi(name, curr->name) == 0)
        {
            printf("DATA UPDATED!\n");
            curr->rating = rating;
            curr->playedHours = playedHours;

            // TODO: DEL DI PRIO, ADD LAGI DI PRIO KARNA SET BRDSRKN RATING
            delPrio(name);
            insertPrio(name, rating, playedHours);
            return curr;
        }
    }
}
game* deleteGameBST(game* curr, char name[])
{
    if(!curr)
    {
        printf("DATA DOESN'T EXIST!\n");
        update = 1;
        return curr;
    }
    if(strcmpi(name, curr->name) > 0)
    {
        curr->left = deleteGameBST(curr->left, name);
    }
    else if(strcmpi(name, curr->name) < 0)
    {
        curr->right = deleteGameBST(curr->right, name);
    }
    else
    {
        if(!curr->right && !curr->left)
        {
            free(curr);
            return NULL;
        }
        else if(!curr->right)
        {
            game *temp = curr->left;
            free(curr);
            return temp;
        }
        else if(!curr->left)
        {
            game *temp = curr->right;
            free(curr);
            return temp;
        }
        else
        {
            game *temp = curr->right;
            while(temp->left)
            {
                temp = temp->left;
            }

            strcpy(curr->name, temp->name);
            curr->rating = temp->rating;
            curr->playedHours = temp->playedHours;

            curr->right = deleteGameBST(curr->right, name);
            return curr;
        }
    }
}
void viewBST(game* curr)
{
    if(curr)
    {
        viewBST(curr->left);
        printf("  %s - %d - %d\n", curr->name, curr->rating, curr->playedHours);
        viewBST(curr->right);
    }
}


void viewPrio()
{
    game *temp = head;
    while(temp)
    {
        printf("  %s - %d - %d\n", temp->name, temp->rating, temp->playedHours);
        temp = temp->next;
    }
}

int valInp(int min, int max)
{
    char rand[100] = {};
    int satisfied = 1;
    int res;
    int x = 1;
    do{
        if(!x)
        {
            printf("INVALID! >> ");
        }
        x = 0;
        satisfied = 1;
        scanf("%[^\n]", rand);
        getchar();

        if(!strlen(rand))
        {
            satisfied = 0;
        }
        else
        {
            for (int i = 0; i < strlen(rand);i++)
            {
                if(!isdigit(rand[i]))
                {
                    satisfied = 0;
                    break;
                }
            }
            if(satisfied)
            {
                res = atoi(rand);
            }
        }
    } while (!satisfied || res < min || res > max);
    return res;
}

void valNme(char rand[])
{
    int satisfied = 1;
    int x = 1;
    do{
        if(!x)
        {
            printf("INVALID! >> ");
        }
        x = 0;
        satisfied = 1;
        scanf("%[^\n]", rand);
        getchar();

        for (int i = 0; i < strlen(rand);i++)
        {
            if(!isdigit(rand[i]) && !(rand[i] >= 'a' && rand[i] <= 'z') && !(rand[i] >= 'A' && rand[i] <= 'Z') && rand[i] != 32)
            {
                satisfied = 0;
                break;
            }
        }
    } while (!satisfied || strlen(rand) < 1 || strlen(rand) > 100);
}


int main()
{
    int menu;
    do
    {
        system("cls");
        printf("DATA\n=====\n");
        viewBST(root);
        printf("=====\n");
        printf("MENU\n1. Display (Name)\n2. Add\n3. Delete\n4. Display (Rating)\n5. Exit\n>> ");
        menu = valInp(1, 5);

        system("cls");
        if(menu == 1)
        {
            viewBST(root);
        }
        if (menu == 2)
        {
            char name[150] = {};
            int rating, playHours;
            printf("Name? [1-100 CHRCTS] >> ");
            valNme(name);

            printf("Rating? [1-10 NMRIC] >> ");
            rating = valInp(1, 10); 
            
            printf("Play Hours? [0-2000 NMRIC] >> ");
            playHours = valInp(0, 2000);

            update = 0;
            root = insertGameToBST(root, name, rating, playHours);
            if(update)
                insertPrio(name, rating, playHours);
        }
        if(menu == 3)
        {
            char name[150] = {};
            printf("Name? [1-100 CHRCTS] >> ");
            valNme(name);

            update = 0;
            root = deleteGameBST(root, name);
            if(!update)
                delPrio(name);
        }
        if(menu == 4)
        {
            viewPrio();
        }
        if(menu != 5)
        {
            printf("Press Enter to Continue...\n");
            getchar();
        }
    } while (menu >= 1 && menu <= 4);
    
}
