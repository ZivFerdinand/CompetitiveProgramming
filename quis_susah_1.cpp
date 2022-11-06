#include<stdio.h>

float arr[120][120];
int main()
{
    int q;
    scanf("%d", &q);

    int n;
    int k;

    while(q--)
    {
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n;i++)
        {
            for (int j = 0;j<n;j++)
            {
                scanf("%f", &arr[i][j]);
            }
        }

        for (int i = 0; i <= n - k;i++)
        {
            for (int j = 0; j <= n - k;j++)
            {
                 double sum = 0;
                for (int first = i; first < i + k;first++)
                {
                    for (int second = j; second < j + k;second++)
                    {
                        sum += arr[first][second];
                    }
                }
                printf("%.2lf", sum/k/k);
                if(j<n-k)
                    printf(" ");
            }
            printf("\n");
        }
    }
}