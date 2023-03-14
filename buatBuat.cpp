#include <stdio.h>
#include <stdlib.h>

struct data{
    int key;
    int height;
    data *left, *right;
} *root = NULL;

data* createData(int key)
{
    data *newData = (data *)malloc(sizeof(data));
    newData->key = key;
    newData->height = 1;
    newData->left = newData->right = NULL;

    return newData;
}

void view(data* curr)
{
    if(curr)
    {
        printf("%d ", curr->key);
        view(curr->left);
        view(curr->right);
    }
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int getHeight(data* curr)
{
    if(!curr)
        return 0;
    else
        return curr->height;
}
int getBF(data* curr)
{
    if(!curr)
        return 0;
    else
        return getHeight(curr->left) - getHeight(curr->right);
}

data* rightRotation(data* t)
{
    data *s = t->left;
    data *b = s->right;

    t->left = b;
    s->right = t;

    t->height = 1 + max(getHeight(t->left), getHeight(t->right));
    s->height = 1 + max(getHeight(s->left), getHeight(s->right));
    return s;
}

data* leftRotation(data* t)
{
    data *s = t->right;
    data *b = s->left;

    t->right = b;
    s->left = t;

    t->height = 1 + max(getHeight(t->left), getHeight(t->right));
    s->height = 1 + max(getHeight(s->left), getHeight(s->right));
    return s;
}

data* insertData(data* curr, int key)
{
    if(!curr)
    {
        return createData(key);
    }
    else if(curr->key < key)
    {
        curr->right = insertData(curr->right, key);
    }
    else if(curr->key > key)
    {
        curr->left = insertData(curr->left, key);
    }
    else
        return curr;

    curr->height = 1 + max(getHeight(curr->left), getHeight(curr->right));
    int bal = getBF(curr);

    if(bal > 1 && getBF(curr->left) >= 0)
    {
        return rightRotation(curr);
    }
    else if(bal < -1 && getBF(curr->right) <= 0)
    {
        return leftRotation(curr);
    }
    else if(bal > 1 && getBF(curr->left) < 0)
    {
        curr->left = leftRotation(curr->right);
        return rightRotation(curr);
    }
    else if(bal < -1 && getBF(curr->right) > 0)
    {
        curr->right = rightRotation(curr->right);
        return leftRotation(curr);
    }

    return curr;
}

int main()
{
    root = insertData(root, 10);
    root = insertData(root, 20);
    root = insertData(root, 30);
    root = insertData(root, 40);
    root = insertData(root, 50);
    root = insertData(root, 25);
    view(root);
}