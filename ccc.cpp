#include <stdio.h>

int arr[100050];
long long sum = 0;
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int odd = 0;
    int keep;
    for (int i = n-1; i >= 0;i--)
    {
        if(arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            odd++;
            if(odd %2 == 0)
            {
                odd = 0;
                sum += arr[i] + keep;
            }
            keep = arr[i];
        }
        
    }

    printf("%lld\n", sum);
}