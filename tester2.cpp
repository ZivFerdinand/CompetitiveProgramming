#include<stdio.h>

int main()
{
	int arr[10][10];
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (int i = 0; i < 3;i++)
	{
		int x = 1;
		int a = 0;
		int b = i;
		for (int j = 0; j < 3;j++)
		{
			if(a>=3)
				a = 0;
			if(b>=3)
				b = 0;

			x *= arr[a][b];

			a++, b++;
		}
		sum += x;
	}
	for (int i = 0; i < 3;i++)
	{
		int x = -1;
		int a = 2;
		int b = i;
		for (int j = 0; j < 3;j++)
		{
			if(a>2)
				a = 0;
			if(b<0)
				b = 2;

			x *= arr[a][b];

			a++, b--;
		}
		sum += x;
	}

	printf("%d\n", sum);
}