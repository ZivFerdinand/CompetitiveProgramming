#include<stdio.h>

long long arr[10050], x;

int main()
{
    int q, cnt, n;
    scanf("%d", &q);

    for (int i = 1; i <= q;i++)
    {
        cnt = 0;
        scanf("%d", &n);
        for (int k = 0; k < n; k++)
        {
            scanf("%lld", &arr[k]);
        }

        for (int j = 0; j < n;j++)
        {
            scanf("%lld", &x);
            if (x > arr[j])
                cnt++;
        }
        printf("Case #%d: ", i);

        printf("%d\n", cnt);
    }
}