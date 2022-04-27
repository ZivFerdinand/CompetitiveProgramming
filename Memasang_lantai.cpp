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

ll arr[1001];

ll func(ll x)
{
    if(x<=2 && x>=0)
        return 1;

    else
    {
        ll a;
        (arr[x - 1] == -1)
            ? a = func(x - 1),
              arr[x - 1] = a
            : a = arr[x - 1];
        ll b;
        (arr[x - 3] == -1)
            ? b = func(x - 3)
            : b = arr[x - 3];
        return (a + b) % 1000000;
    }
    
}
int main()
{
    memset(arr, -1, sizeof(arr));
    ll n;
    cin >> n;

    cout << func(n);
}

/*
5

0 0 1 0 1
*/