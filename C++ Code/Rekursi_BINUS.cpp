#include <stdio.h>
#include<string.h>

void func(int arr[], int index, int limit, int sum)
{
    if(index==limit)
    {
        printf("%d\n", sum);
        return;
    }
    if(index*2==limit)
    {
        printf("%d\n", sum + arr[index*2]);
        return;
    }
    if(index*2>limit)
    {
        printf("%d\n", sum);
        return;
    }

    func(arr, index * 2, limit, sum+arr[index*2]);
    func(arr, index * 2 + 1, limit, sum+arr[index*2+1]);
} 

int main()
{
    int arr[150] = {};
    int q, n;
    scanf("%d", &q);

    for (int i = 1; i <= q;i++)
    {
        scanf("%d", &n);
        for (int j = 1; j <= n;j++)
        {
            scanf("%d", &arr[j]);
        }

        printf("Case #%d:\n", i);
        func(arr, 1, n, arr[1]);
    }
}