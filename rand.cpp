#include<stdio.h>

// int rea(int* a, int indexA, int indexB, int indexC, int value, int arraySize)
// {
// 	*((a+(indexA*arraySize)) + (indexB * arraySize) + indexC) = value;
// }

int read(int* a, int indexA, int indexB, int value, int arraySize)
{
	*((a+(indexA*arraySize)) + indexB) = value;
}

int readd(int* a, int indexA, int value)
{
	a[indexA] = value;
}

int main()
{
	int numm[5][5];
	read((int *)numm, 1, 1, 10, 5);
	printf("%d\n", numm[1][1]);

	// int x[5][5][5];
	// rea((int *)x, 1, 1, 1, 100, 5);
	// printf("%d\n", x[1][1][1]);

	
	int num[5];
	readd(num, 0, -1);
	printf("%d\n", num[0]);
}