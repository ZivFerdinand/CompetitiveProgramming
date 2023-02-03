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

    int n, a, b;
    a = b = 0;
    while(q--)
    {
        cin >> n;
        if(n==25)
            a++;
        
        if(n==50)
        {
            if(!a)
            {
                cout << "NO\n";
                return 0;
            }
            b++;
            a--;
        }
        if(n==100)
        {
            if(a&&b)
                b--, a--;
            else if(a>=3)
                a -= 3;
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}

/*

*/
