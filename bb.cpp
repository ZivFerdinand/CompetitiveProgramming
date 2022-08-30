#include<stdio.h>
int main()
{
    int q, n, x;
    long long sum;
    scanf("%d", &q);

    for (int i = 1; i <= q;i++)
    {
        scanf("%d", &n);
        sum = 0;
        while(n--)
        {
            scanf("%d", &x);
            sum += x;
        }

        printf("Case #%d: %lld\n", i, sum);
    }
}