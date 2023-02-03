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
    string s;
    while(q--)
    {
        cin >> s;
            bool end = false;
        if(!(s.length()%2))
        {
            for (int i = s.length() / 2; i < s.length();i++)
            {
                if(s[i]!=s[i-(s.length()/2)])
                    break;

                if(i==s.length()-1)
                    end = true;
            }

            (end) ? cout << "YES\n" : cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}

/*
0 1 2 3
*/