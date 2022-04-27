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
    int n, k;
    int q;
    cin >> q;

    while(q--)
    {
        cin >> n >> k;
        if(k<=(n/2)+(n%2))
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j && !(j % 2) && k > 0)
                    {
                        cout << 'R';
                        k--;
                    }
                    else
                        cout << '.';
                }
                cout << '\n';
            }
        }
        else
            cout << -1 << '\n';
    }
}

/*


*/