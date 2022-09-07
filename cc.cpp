#include<stdio.h>

int main()
{
    int q, n;
    long long x;
    scanf("%d", &q);

    for (int i = 1; i <= q;i++)
    {
        long long arr[200]={};
        scanf("%d", &n);
        for (int j = 0; j < n;j++)
        {
            for (int k = 0; k < n;k++)
            {
                scanf("%d", &x);
                arr[k] += x;
            }
        }

        printf("Case #%d: ", i);
        for (int j = 0; j < n;j++)
        {
            printf("%d", arr[j]);
            if(j<n-1)
                printf(" ");
        }
        printf("\n");
    }
}