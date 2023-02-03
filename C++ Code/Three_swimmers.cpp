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

    ll p, a, b, c;
    while(q--)
    {
        cin >> p >> a >> b >> c;

        a *= ((p / a) + (bool(p % a)));
        b *= ((p / b) + (bool(p % b)));
        c *= ((p / c) + (bool(p % c)));

        cout << min(min(a - p, c - p), (b - p)) << '\n';
    }
}

/*
5

0 0 1 0 1
*/