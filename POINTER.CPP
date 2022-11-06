#include<stdio.h>

int a(int *a, int *b)
{
	*a = 10;
	*b = 20;
}
int main()
{
	// int i=1;
	// int *pt = &i;
	// int **ptt = &pt;
	// int ***pttt = &ptt;

	// ***pttt = 5;
	// printf("%d %d %d %d", i, *pt, **ptt, ***pttt);

	// int i = 1,j=2;
	// int *p = &i;
	// *p = 5;
	// a(&i, &j);
	// printf("%d %d", i, j);

	// char x;
	// int y;
	// scanf("%c", &x);

	// int* p=&y;
	// *p = y;
	// p = &y;
	// printf("%d", *p);

	// int x = 5;
	// int* p;
	// *p = x;
	// printf("%d", p);

	char x;
	int y;
	scanf("%c",&x);
	char* p=&x;
	*p = x;
	printf("%d",*p);
}

// pointer

// 	pake * itu artinya valuenya;
//  tanpa * itu artinya address;
//  pake & artinya address juga;

// var biasa

//  pake & itu address
//  tanpa artinya value