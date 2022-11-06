#include<stdio.h>

int main()
{
    int q;
    scanf("%d", &q);

    int n;
    int a, b;
    int arr[1050];
    for (int i = 1; i <= q;i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n;j++)
            scanf("%d", &arr[j]);

        scanf("%d %d", &a, &b);

        a--, b--;
        printf("Case #%d : ", i);
        if(arr[a]<arr[b])
            printf("Lili\n");
        else if(arr[b]<arr[a])
            printf("Bibi\n");
        else
        {
            printf("Draw\n");
        }
        
    }
}