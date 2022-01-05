#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
#define ld long double
using namespace std;

ll arr[100010];

int main()
{
    int q;
    cin >> q;

    int n;
    ll x, total;
    while(q--)
    {
        total = 0;
        cin >> n >> x;
        for (int i = 0; i < n;i++)
            cin >> arr[i], total += arr[i];

        sort(arr, arr + n);

        for (int i = 0; i < n;i++)
        {
            if (total / x >= n - i)
            {
                cout << n - i << '\n';
                break;
            }
            if(i==n-1)
                cout << 0 << '\n';

            total -= arr[i];
        }
    }
}

/*
1 1 2 5
2 4 0 3
3 4 2 3
*/
