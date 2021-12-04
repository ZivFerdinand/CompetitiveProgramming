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
    bool ans;
    int q;
    cin >> q;

    ld n, k;
    while(q--)
    {
        ans = false;
        cin >> n >> k;
        if(n>=k)
            cout << "YES\n";
        else
        {
            for (ld i = 1; i <= sqrt(k);i++)
            {
                if(i+ceil(k/(i+1)) <= n)
                {
                    cout << "YES\n";
                    ans = true;
                    break;
                }
            }
            if(!ans)
                cout << "NO\n";
        }
    }
}
/*

*/