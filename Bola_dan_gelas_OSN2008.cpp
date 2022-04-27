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

int arr[100010], n, m, i, x, y;

int main()
{
    cin >> n >> m;
    for (i = 1; i <= n;i++)
        arr[i] = i;

    for (i = 1; i <= m;i++)
    {
        cin >> x >> y;
        swap(arr[x], arr[y]);
    }

    cin >> i;
    while(i--)
    {
        cin >> x;
        cout << arr[x] << '\n';
    }
}

/*

A B C D E

1 3
4 2
5 2
4 5
3 2
4 1

4 1 5 3 2
1 2 3 4 5
*/