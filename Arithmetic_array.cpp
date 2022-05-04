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

    int x,y;
    ll total;
    while(q--)
    {
        cin >> x;
        total = 0;
        for (int i = 0; i < x;i++)
        {
            cin >> y;
            total += y;
        }

        if(total<x)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << abs(x - total) << '\n';
        }
    }
}

/*
20
3

2
5
*/