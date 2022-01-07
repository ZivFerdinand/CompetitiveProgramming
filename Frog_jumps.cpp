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

ll arr[100010];

int main()
{
    int q;
    cin >> q;

    string s;
    int startingPoint, maxLen;
    while(q--)
    {
        cin >> s;
        startingPoint = -1;
        maxLen = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='R')
            {
                maxLen = max(maxLen, i - startingPoint);
                startingPoint = i;
            }
        }

        maxLen = max(maxLen, (int)s.size() - startingPoint);

        cout << maxLen << '\n';
    }
}

/*
1 1 2 5
2 4 0 3
3 4 2 3
*/
