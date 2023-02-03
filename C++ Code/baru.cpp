#include <stdlib.h>
#include <stdio.h>
#include<math.h>
int main()
{
    int q;
    scanf("%d", &q);

    long long arr[10050];
    long long prefix[10050] = {};
    int n;
    long long m;
    long long x;
    for (int i = 0; i < q;i++)
    {
        scanf("%d %lld", &n, &m);
        prefix[0] = 0;
        for (int j = 1; j <= n;j++)
        {
            scanf("%lld", &x);
            prefix[j] = x + prefix[j - 1];
        }

        // n == 6
        int maxx = -1;
        for (int j = 0; j < n;j++)
        {
            for (int k = j + 1; k <= n;k++)
            {
                if(prefix[k]-prefix[j] <= m)
                {
                    if(k-j > maxx)
                        maxx = k - j;
                }
            }
            // printf("%lld ", prefix[j]);
        }
        printf("Case #%d: %d\n", i+1, maxx);
    }
}

/*


*/