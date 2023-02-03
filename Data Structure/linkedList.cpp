#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	Node *next;
};

Node *myLinkedList = (Node *)malloc(sizeof(Node));

void print()
{
    printf("Data saat ini: ");
    Node *temp = myLinkedList;
	while((*temp).next != NULL)
	{
		printf("%d ", (*temp).value);
		temp = (*temp).next;
	}
	printf("%d\n", (*temp).value);
}
void insertBelakang(int x)
{
	Node *temp = myLinkedList;
	Node *temp2 =  (Node *)malloc(sizeof(Node));
	while((*temp).next != NULL)
	{
		temp = (*temp).next;
	}
	temp2->value = x;
	temp2->next = NULL;
	temp->next = temp2;
}
void insertDepan(int x)
{
	Node *temp = myLinkedList;
	Node *temp2 =  (Node *)malloc(sizeof(Node));
	temp2->value = x;
	temp2->next = myLinkedList;
	myLinkedList = temp2;
}
void insertTengah(int idx, int x)
{
	Node *temp = myLinkedList;
	Node *temp2 =  (Node *)malloc(sizeof(Node));
	int i;
	for ( i = 0; i <= idx && temp->next != NULL;i++)
	{
		temp = temp->next;
	}
	if(i-1 == idx)
	{
		printf("X\n");
		temp2->next = temp->next;
		temp2->value = x;

		temp->next = temp2;
	}
}
void hapusTengah(int idx)
{
	idx--;
	int i;
	Node *temp = myLinkedList;
	Node *temp2;
	for (i = 0; i < idx && temp->next != NULL;i++)
	{
		temp2 = temp;
		temp = temp->next;
	}
	if(i == idx)
		temp2->next = temp->next;
    free(temp);
}
void hapusDepan()
{
    Node *temp = myLinkedList;
    if(myLinkedList != NULL)
    {
        myLinkedList = temp->next;
    }
    free(temp);
}

int main()
{
    myLinkedList = NULL;

	while(true)
	{
		int x, idx, choice;
		scanf("%d %d %d", &x, &idx, &choice);
        
        if(choice == 1)
        {
            insertDepan(x);
        }
        else if(choice == 2)
        {
            hapusTengah(idx);
        }
        else
        {
            hapusDepan();
        }
        
		print();
	}
}