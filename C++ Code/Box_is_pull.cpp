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
using namespace std;

int main()
{
    ll x, y, x2, y2;
    int q;
    cin >> q;
    while(q--)
    {
        cin >> x >> y >> x2 >> y2;

        if (x == x2 && y == y2)
        {
            cout << 0 << '\n';
        }
        else
        {
            ll total = 0;
            if (x != x2 && y != y2)
                total = 2;

            cout << total + abs(x2 - x) + abs(y2 - y) << '\n';
        }
    }
}

/*



*/