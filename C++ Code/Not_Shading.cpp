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

string s[100];

int main()
{
    int q, n, m, r, c;
    cin >> q;

    while(q--)
    {
        cin >> n >> m >> r >> c;
        r--, c--;

        bool found, foundSameGrid, foundOutsideGrid;
        found = foundSameGrid = foundOutsideGrid = 0;

        for (int i = 0; i < n;i++)
        {
            cin >> s[i];
            for (int j = 0; j < m;j++)
            {
                if (i == r && j == c && s[i][j]=='B')
                {
                    cout << 0 << '\n';
                    found = 1;
                    break;
                }

                if ((i == r || j == c) && s[i][j] == 'B')
                    foundSameGrid = 1;
                else if (s[i][j] == 'B')
                    foundOutsideGrid = 1;
            }
        }

        if(found)
            continue;
        else
        {
            if(foundSameGrid)
                cout << 1;
            else if(foundOutsideGrid)
                cout << 2;
            else
                cout << -1;
        }

        cout << '\n';
    }
}

/*
5

0 0 1 0 1
*/