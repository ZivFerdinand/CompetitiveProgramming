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

bool check(ll r, ll g, ll b, ll w) 
{
    if( r % 2 + g % 2 + b % 2 + w % 2 > 1)
        return false;
    else 
        return true;
}

int main()
{
    int q;
    cin >> q;

    ll r, g, b, w;
    while(q--)
    {
        cin >> r >> g >> b >> w;
        if(check(r,g,b,w))
            cout << "Yes";
        else if (r && g && b && check(r - 1, g - 1, b - 1, w + 3))
            cout << "Yes";
        else
            cout << "No";

        cout << '\n';
    }
}

/*
r g b w
1 -> +3
2 -> +6
3 -> +9

0 0 0 1 OK
0 0 1 1 

*/