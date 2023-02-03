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
    int q, n, progress, totalDiff, x;
    cin >> q;

    while(q--)
    {
        progress = totalDiff = 0;

        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x>progress)
            {
                progress = x;
                totalDiff++;
            }
            else if(x==progress)
            {
                progress = x + 1;
                totalDiff++;
            }
        }

        cout << totalDiff << '\n';
    }
}

/*


*/