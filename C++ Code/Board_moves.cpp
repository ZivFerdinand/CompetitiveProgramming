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

    ld n;
    while(q--)
    {
        cin >> n;
        n /= 2;
        n = trunc(n);
        
        n = (ll)((n + 2 * (n * n * n)) / 3 + (n * n));
        ll x = n;
        cout << x * 4 << '\n';
    }
}

/*
()(()()()((()()()(((())))()))()(

*/