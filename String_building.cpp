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

    string s;
    while(q--)
    {
        cin >> s;

        bool x = true;
        int i = 0, cnt = 0;
        while (i < s.size())
        {
            if (!i)
            {
                cnt = 1;
                if(i == s.size() - 1)
                {
                    x = false;
                    cout << "NO\n";
                    break;
                }
            }
            else if(s[i] != s[i - 1])
            {
                if(cnt == 1)
                {
                    x = false;
                    cout << "NO\n";
                    break;
                }
                cnt = 1;
                if(i == s.size() - 1)
                {
                    x = false;
                    cout << "NO\n";
                    break;
                }
            }
            else
                cnt++;

            i++;
        }
        if(x)
            cout << "YES\n";
    }
}

/*
aa, aaa, bb and/or bbb
*/