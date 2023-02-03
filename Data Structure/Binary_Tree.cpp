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
    if(curr->left)
    displayInFix(curr->left);
        printf("%d\n", curr->val);
    if(curr->right)
    displayInFix(curr->right);
}

void del(data* curr, int delVal)
{
    if(!curr)
    {
    printf("%d is not available\n", delVal);
    }

    if(curr->val == delVal)
    {

    }
    if(delVal < curr->val)
    {
    del(curr->left, delVal);
    }
    else{
    del(curr->right, delVal);
    }
}

data* delRecursive(data* parent, data* curr)
{
    if(!curr->left && !curr->right)
    {
        
    }
}

int main()
{
    insert(root, 30);
    insert(root, 15);
    insert(root, 37);
    displayInFix(root);
}