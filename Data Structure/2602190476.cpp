#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    int val;
    data *left;
    data *right;
};

data *root = NULL;

data* createData(int val)
{
    data *temp = (data*)malloc(sizeof(data));
    temp->val = val;
    temp->left = temp->right = NULL;

    return temp;
}

void insert(data* curr, int newVal)
{
    if(!root)
    {
        root = createData(newVal);
    }
    else
    {
        if(curr->left == NULL && newVal < curr->val)
        {
            curr->left = createData(newVal);
        }
        else if(curr->right == NULL && newVal > curr->val)
        {
            curr->right = createData(newVal);
        }
        else if(newVal < curr->val)
        {
            insert(curr->left, newVal);
        }
        else
        {
            insert(curr->right, newVal);
        }
        
    }
    
}

void displayInFix(data* curr)
{
    if(curr==NULL)
    {
        printf("XX\n");
        return;
    }
    if(curr->left)
    displayInFix(curr->left);
    if (curr && curr->val != -1)
    printf("%d\n", curr->val);
    if(curr->right)
    displayInFix(curr->right);
}

int find(data* curr)
{
    printf("X\n");
    while(curr && !curr->right)
    {
    curr = curr->left;
    }

    while(curr->right)
    {
    curr = curr->right;
    }
    int x = curr->val;
    printf("FOUND%d\n", curr->val);
    curr->val = -1;
    // free(curr);
    curr = NULL;
    return x;
}

data* del(data* curr, int delValue)
{
    if(curr == NULL)
    {
    printf("NOt found\n");
    return root;
    }

    if(curr->val == delValue)
    {
    printf(":%d\n", curr->val);
        if(!curr->left)
        {
            if(curr->right)
            {
                data *temp = curr->right;
                free(curr);
                return temp;
            }
            else
            {
                printf("sama");
                free(curr);
                curr = NULL;
                return NULL;
            }
        }
        else
        {
            int y = find(curr->left);
            curr->val = y;

            data *x = curr;
            return curr;
        }
    }
    if(!curr->left && !curr->right)
    {
    printf("Not Found!\n");
    return root;
    }

    if(delValue < curr->val)
    {
    curr->left = del(curr->left, delValue);
    }
    else if(delValue > curr->val)
    {
    curr->right = del(curr->right, delValue);
    }
}




int main()
{
    insert(root, 60);
    insert(root, 41);
    insert(root, 74);
    insert(root, 16);
    insert(root, 53);
    insert(root, 25);
    insert(root, 46);
    insert(root, 55);    
    insert(root, 42);
    insert(root, 65);
    insert(root, 63);
    insert(root, 70);
    insert(root, 62);
    insert(root, 64);

    root = del(root,41);
    root = del(root,60);
    root = del(root,42);
    root = del(root,55);
    printf("ASUa\n");
    if(!root)
    {
    printf("XXya");
    }
    printf("bis");
    displayInFix(root);
    printf("a");
}