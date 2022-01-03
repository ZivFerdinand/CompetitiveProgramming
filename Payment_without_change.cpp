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


int main()
{
    int q;
    cin >> q;

    ll a, b, n, s;
    while(q--)
    {
        cin >> a >> b >> n >> s;

        if((a*n)+b<s)
            cout << "NO\n";
        else if(n==1)
        {
            if(a+b>=s)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else   
        {
            ll x = s / n, y = min(x, a) * n, z=s-y;
            if(s-y<=b)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }
}

/*
8 17
1 1 1 1 1 1 1 1

9/8
*/