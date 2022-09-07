#include<stdio.h>
int main()
{
	int i=1;
	int *pt = &i;
	int **ptt = &pt;
	int ***pttt = &ptt;

	***pttt = 5;
	printf("%d %d %d %d", i, *pt, **ptt, ***pttt);
}