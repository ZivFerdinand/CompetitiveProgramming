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
    ld a, b, total, i;
    bool ans;
    int q;
    cin >> q;

    while(q--)
    {
        cin >> total;

        if(total == 1)
        {
            cout << "NO" << '\n';
            continue;
        }
        ans = 0;
        i = 1;
        while(i*i*i<=total)
        {
            ld x = pow(i++, 3);
            b = cbrt(total - x);
            
            if(b==trunc(b) && b)
            {
                ans = true;
                cout << "YES\n";
                break;
            }
        }

        if(!ans)
            cout << "NO\n";
    }
}
/*

*/