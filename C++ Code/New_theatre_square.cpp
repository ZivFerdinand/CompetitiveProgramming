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

    int n, m, a, b, cnt, total;
    bool check = 0;
    string s;
    while(q--)
    {
        cnt = total = 0;
        cin >> n >> m >> a >> b;
        check = (a * 2) <= b;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            cnt = 0;
            for (int j = 0; j < m; j++)
            {
                if(s[j]=='.')
                    cnt++;

                if((s[j+1]=='*' || j==m-1 )&& cnt)
                {
                    (check) ? total += cnt *a : total += ((cnt / 2) * b) + (cnt%2)*a;
                    cnt = 0;
                }
            }
        }

        cout << total << '\n';
    }
}

/*
8 -> 1
4 -> 2
2 -> 3
6 -> 0


*/