#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    Node *next;
};

Node *myList = (Node *)malloc(sizeof(Node *));

int b = 0;
int a = 7;
void insertFirstNode()
{
    Node *ptr = (Node *)malloc(sizeof(Node *));
    ptr->value = b++;
    ptr->next = myList;
    myList = ptr;
}
void insertLastNode()
{
    Node *ptr = myList;
    Node *ptr1;
    Node *ptr2 = (Node *)malloc(sizeof(Node *));
    while(ptr->next != NULL)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }
    a++;
    //ptr1->next = ptr;
    ptr2->value = a;
    ptr2->next = NULL;
    ptr->next = ptr2;
}

void printAll()
{
    Node *ptr = myList;
    while(ptr->next!=NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->value);
}

int main()
{
    Node *second = (Node *)malloc(sizeof(Node *));
    myList->value = -1;
    myList->next = second;

    second->value = 2;
    second->next = NULL;
    while(true)
    {
        getchar();
        //insertLastNode();
        insertFirstNode();
        printAll();
    }
}