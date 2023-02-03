#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    Node *next;
    Node *prev;
};

Node *head = NULL, *tail = NULL;

void pushBack(int x)
{
    if(tail == NULL)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        temp->next = NULL;
        temp->prev = NULL;
        temp->value = x;
        head = tail = temp;
    }
    else
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        tail->next = temp;
        temp->next = NULL;
        temp->prev = tail;
        temp->value = x;
        tail = temp;
    }
}

void pushFront(int x)
{
    if(head == NULL)
        {
            head = (Node *)malloc(sizeof(Node));
            head->prev = NULL;
            head->next = NULL;
            head->value = x;

            tail = head;
        }
        else
        {
            Node *temp = (Node *)malloc(sizeof(Node));
            temp->next = head;
            temp->prev = NULL;
            temp->value = x;
            head = temp;
        }
}

void insertAt(int idx, int x)
{
    Node *temp = head;

    if(idx <= 1)
    {
        pushFront(x);
        return;
    }
    int i;
    for (i = 1; i < idx;i++)
    {
        if(temp == NULL)
        {
            pushBack(x);
            return;
        }
        temp = temp->next;
    }
    if(temp == NULL)
    {
        pushBack(x);
        return;
    }
    Node *neww = (Node *)malloc(sizeof(Node));
    temp->prev->next = neww;
    neww->prev = temp->prev;
    neww->next = temp;
    neww->value = x;

    temp->prev = neww;
    //printf("%d\n", temp->value);
}

void deleteAt(int idx)
{
    Node *temp = head;

    if(idx <= 1)
    {
        head = head->next;
        head->prev = NULL;
        return;
    }
    int i;
    for (i = 1; i < idx;i++)
    {
        if(temp == NULL)
        {
            if(tail->prev == NULL)
            {
                tail = head = NULL;
                return;
            }
            tail = tail->prev;
            tail->next = NULL;
            return;
        }
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL)
    {
        if(tail->prev == NULL)
        {
            tail = head = NULL;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        return;
    }
     
    Node *temp2 = temp;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
}

void viewAll()
{
    Node *temp = head;
    printf("Data\n");
    if(temp!= NULL)
    while(temp->next != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    if(temp != NULL)
        printf("%d", temp->value);
    printf("\nEndData\n");
}

int main()
{
    viewAll();
    // pushBack(10);
    // pushBack(20);
    // pushBack(30);
    // pushBack(40);
    while(true)
    {
        int cho, x, idx;
        scanf("%d %d", &idx, &x);

        insertAt(idx, x);

        viewAll();
    }
}