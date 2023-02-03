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
    int q;
    cin >> q;

    ll n;
    while(q--)
    {
        cin >> n;
        if(!(n%3))
            cout << n / 3 << ' ' << n / 3;
        else
        {
            ll x, y;
            x = y = n / 3;

            if(n-(2*x)-y == 1)
                x++;
            else
                y++;

            cout << x << ' ' << y;
        }

        cout << '\n';
    }
}
/*
32
10 11

*/