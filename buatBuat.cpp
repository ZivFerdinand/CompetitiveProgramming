#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int value;
	Node *next;
};

int main()
{
	Node *head = (Node *)malloc(sizeof(Node *));
	Node *second = (Node *)malloc(sizeof(Node *));

	printf("%d", head->value);
	if(head != NULL)
		printf("x");
	(*head).value = 10;
	head->next = second;

	second->value = 20;
	second->next = NULL;

	Node *ptr;
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->value);
		ptr = ptr->next;
	}

}