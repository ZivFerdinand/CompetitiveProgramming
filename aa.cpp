#include <stdio.h>


int main()
{
    int arr[200];
    int n, q, a, b;
    scanf("%d", &n);

    for (int i = 0; i < n;i++)
        scanf("%d", &arr[i]);

    scanf("%d", &q);
    for (int i = 1; i <= q;i++)
    {
        scanf("%d %d", &a, &b);
        arr[a - 1] = b;

        printf("Case #%d: ", i);

        for (int j = 0; j < n;j++)
        {
            printf("%d",arr[j]);
            if (j < n - 1)
                printf(" ");
        }

        printf("\n");
    }
}