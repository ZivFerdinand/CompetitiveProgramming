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
    ll q, n, m, x;
    cin >> q;

    while(q--)
    {
        cin >> n >> m >> x;
        // 2 2 3                                        3 5 9
        // from left to right = x/n + (bool)x%n = 2     3
        // from top to bottom = x%n             = 1     0 -> 3
        // from top to bottom                        -> (3-1)*5 + left to right

        ll leftToRight = x / n + (bool)(x % n);
        ll topToBottom = x % n;

        if(topToBottom == 0)
            topToBottom = n;

        cout << ((topToBottom - 1) * m) + leftToRight << '\n';
    }
}

/*
1 2
3 4

1 2 3
4 5 6
7 8 9

1000000000000
1000000000000
*/