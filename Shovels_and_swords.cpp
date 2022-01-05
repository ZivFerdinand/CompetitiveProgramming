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

    ll a, b;
    while(q--)
    {
        cin >> a >> b;
        if(a>b)
            swap(a, b);

        cout << min(a, min(b, (a + b) / 3));
        cout << '\n';
    }
}

/*
7 8
---
1 2
1 2
1 2
2 1
2 1
*/
