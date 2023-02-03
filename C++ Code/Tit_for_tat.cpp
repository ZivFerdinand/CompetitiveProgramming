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

int arr[200];

int main()
{
    int q, n, k, x, total;
    cin >> q;

    while(q--)
    {
        total = 0;
        cin >> n >> k;
        for (int i = 0; i < n;i++)
        {
            cin >> arr[i];

            if (i < n - 1 && k)
            {
                int x = min(k, arr[i]);
                arr[i] -= x, k -= x;
                total += x;
            }
        }
        arr[n - 1] += total;

        for (int i = 0; i < n;i++)
        {
            cout << arr[i];
            if (i < n - 1)
                cout << ' ';
        }
        cout << '\n';
    }
}

/*
5

0 0 1 0 1
*/