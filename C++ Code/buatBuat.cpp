#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    Node *left, *right;
}* root = NULL;

Node* createNode(int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->val = val;
    newNode->left = newNode->right = NULL;

    return newNode;
}

void insert(Node* curr, int val)
{
    if(!root)
    {
        root = createNode(val);
    }
    else
    {
        if(val < curr->val && !curr->left)
        {
            curr->left = createNode(val);
            return;
        }
        else if(val > curr->val && !curr->right)
        {
            curr->right = createNode(val);
            return;
        }

        if(val < curr->val)
        {
            insert(curr->left, val);
        }
        else
        {
            insert(curr->right, val);
        }
        
    }
    
}

Node *findSuccessor(Node *curr)
{
    Node *temp = curr;
    while(temp && temp->right)
    {
        temp = temp->right;
    }

    return temp;
}

Node* del(Node* curr, int delVal)
{
    if(!curr)
    {
        printf("NOT FOUND\n");
        return curr;
    }
    else
    {
        if(curr->val < delVal)
        {
            curr->right = del(curr->right, delVal);
        }
        else if(curr->val > delVal)
        {
            curr->left = del(curr->left, delVal);
        }
        else
        {
            if(!curr->left and !curr->right)
            {
                free(curr);
                return NULL;
            }
            else if(!curr->left)
            {
                Node *temp = curr->right;
                free(curr);
                return temp;
            }
            else if(!curr->right)
            {
                Node *temp = curr->left;
                free(curr);
                return temp;
            }
            else
            {
                Node *temp = findSuccessor(curr->left);
                curr->val = temp->val;

                curr->left = del(curr->left, temp->val);
            }
            
        }
        
    }
    
}

void view(Node* curr)
{
    if(curr)
    {
        view(curr->left);
        printf("%d ", curr->val);
        view(curr->right);
    }
}
int main()
{
    insert(root, 30);
    insert(root, 17);
    insert(root, 37);
    insert(root, 11);
    insert(root, 19);
    insert(root, 10);
    insert(root, 31);
    insert(root, 38);
    root = del(root, 30);
    root = del(root, 38);
    root = del(root, 17);
    view(root);
}