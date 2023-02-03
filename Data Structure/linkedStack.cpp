#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    Node *next;
};

Node *top = NULL;

void pushback(int x)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if(top == NULL)
    {
        temp->value = x;
        temp->next = NULL;

        top = temp;
    }
    else
    {
        temp->value = x;
        temp->next = top;

        top = temp;
    }
}

void pop()
{
    if(top != NULL)
    {
        top = top->next;
    }
}

void print()
{
     Node *temp2 = top;
    printf("ini\n");
    while(temp2->next != NULL)
    {
        printf("%d ", temp2->value);
        temp2 = temp2->next;
    }
    printf("%d\n", temp2->value);
}

int main()
{
    while(true)
    {
        int x;
        scanf("%d", &x);

        pushback(x);
        print();
    }
}