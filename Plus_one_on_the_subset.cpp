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

    int n,x;
    while(q--)
    {
        cin >> n;
        int maxx = 0, minn = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> x;
            if(!i)
                minn = x;

            minn = min(x, minn);
            maxx = max(x, maxx);
        }

        cout << maxx - minn << '\n';
    }
}

/*

*/