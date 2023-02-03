#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
    int value;
    char nim[10];
    char name[100];
    Node *next;
};

Node *head = NULL, *tail = NULL;

void push(int x, char name[], char nim[])
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->value = x;
    strcpy(temp->name, name);
    strcpy(temp->nim, nim);

    if(head == NULL)
    {
        head = tail = temp;
        temp->next = NULL;
    }
    else if(strcmp(head->name, name) >= 0)
    {
        temp->next = head;
        head = temp;
    }
    else if(strcmp(tail->name,name) <= 0)
    {
        tail->next = temp;
        temp->next = NULL;
        tail = temp;
    }
    else
    {     //   8
        // 3 7  9
        Node *curr = head;
        while(strcmp(curr->next->name,name) < 0)
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

int main()
{
    push(7, "asu", "12");
    push(10, "bsu", "12");
    push(15, "csu", "12");
    push(13, "isu", "12");
    push(300, "dsu", "12");
    push(5, "esu", "12");
    push(299, "gsu", "12");
    push(299, "fsu", "12");
    push(10, "hsu", "12");

    Node *temp = head;
    while(temp != NULL)
    {
        printf("%s\n", temp->name);
        temp = temp->next;
    }
}