#include<stdio.h>
#include <string.h>
int main()
{
    int a[10][10], b[10][10];

    int n, m, aa, bb;
    scanf("%d %d %d %d", &n,&m,&aa,&bb);
    for (int i = 0; i < n;i++)
        for (int j = 0; j < m;j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < aa;i++)
        for (int j = 0; j < bb;j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < bb;j++)
        {
            int sum = 0;
            
            for (int k = 0; k < m;k++)
            {
                sum+=(a[i][k] * b[k][j]);
            }

            printf("%d ", sum);
        }
        printf("\n");
    }
}

