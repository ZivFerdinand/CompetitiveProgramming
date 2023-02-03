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

    ll n, k;
    ll rand;
    while(q--)
    {
        cin >> n >> k;
        rand = k-(n % k);

        if(rand == k)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << (rand / n) + 1 + bool(rand%n) << '\n';
        }
    }
}

/*
8 17
1 1 1 1 1 1 1 1

9/8
*/