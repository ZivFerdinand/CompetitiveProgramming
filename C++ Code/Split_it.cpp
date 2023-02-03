#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

int main()
{
    int t;
	cin >> t;

    int n, k;
    string s;
    while (t--) {
        cin >> n >> k >> s;

        int check = true;
        if(k*2<n)
        {
            for (int i = 0; i < k;i++)
            {
                if(s[i]!=s[n-i-1])
                {
                    check = 0;
                    break;
                }
            }
        }
        else
        {
            check = 0;
        }

        (check) ? cout << "YES\n" : cout << "NO\n";
    }
}
/*
aabbbabaa
*/