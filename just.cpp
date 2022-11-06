#include <stdlib.h>
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int lower_bound(long long  arr[], int N, long long X)
{
    int mid;
 
    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;
 
    // Till low is less than high
    while (low < high) {
        mid = low + (high - low) / 2;
 
        // If X is less than or equal
        // to arr[mid], then find in
        // left subarray
        if (X <= arr[mid]) {
            high = mid;
        }
 
        // If X is greater arr[mid]
        // then find in right subarray
        else {
            low = mid + 1;
        }
    }
   
    // if X is greater than arr[n-1]
    if(low < N && arr[low] < X) {
       low++;
    }
       
    // Return the lower_bound index
    return low;
}

int main()
{

    long long arr[100050];
    long long prefix[100050] = {};
    int n;
    long long m;
    long long x;
    scanf("%d", &n);
    prefix[0] = 0;
    for (int j = 1; j <= n;j++)
    {
        scanf("%lld", &x);
        prefix[j] = x + prefix[j - 1];
    }

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q;i++)
    {
        scanf("%lld", &m);
        if(m>=prefix[n])
        {
            printf("Case #%d: %d\n", i + 1, n);
            continue;
        }
        else if(m<prefix[1])
        {
            printf("Case #%d: -1\n", i + 1);
            continue;
        }
        // n == 6
        int maxx = -1;
        int j = 0;
        
                // binary search
        maxx = lower_bound(prefix, n,m);
        
        if(prefix[maxx] != m)
            maxx--;

        printf("Case #%d: %d\n", i + 1, maxx);
    }
}

/*


*/