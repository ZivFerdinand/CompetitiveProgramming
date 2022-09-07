#include<stdio.h>
int main()
{
	int kasus;
	scanf("%i", &kasus);getchar();
	for (int i=0;i<kasus;i++)
	{
		int sisi;
		int angka[110][110];
		scanf("%i", &sisi);
		int jumlah[110]={};
		for(int j=0;i<sisi;i++)
		{
			for(int k=0;k<sisi;k++)
			{
				scanf("%i", &angka[k][j]);
			}
		}
		for(int x=0;x<sisi;x++)
		{
			for(int y=0;y<sisi;y++)
			{
				jumlah[y] = jumlah[y] + angka[x][y];
			}
		}
		for(int a=0;a<sisi;a++)
		{
			printf("%i ", jumlah[a]);
		}
	}
}