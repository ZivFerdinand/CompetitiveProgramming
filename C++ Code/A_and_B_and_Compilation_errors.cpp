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
ll arr2[100010];
ll arr3[100010];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr2[i];
    }
    sort(arr2, arr2 -1 + n);

    bool avail = false;
    for (int i = 0; i < n-1; i++)
    {
        if(arr2[i]!=arr[i])
        {
            avail = 1;
            cout << arr[i] << '\n';
            break;
        }
    }
    if(!avail)
        cout << arr[n - 1] << '\n';

    avail = 0;

    for (int i = 0; i < n-2; i++)
    {
        cin >> arr3[i];
    }
    sort(arr3, arr3 -2 + n);

    
    for (int i = 0; i < n-2; i++)
    {
        if(arr3[i]!=arr2[i])
        {
            avail = 1;
            cout << arr2[i] << '\n';
            break;
        }
    }
    if(!avail)
        cout << arr2[n - 2] << '\n';
}

/*

1 5 7 8 123
1 5 7 123
*/