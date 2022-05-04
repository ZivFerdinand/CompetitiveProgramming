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

    map<char, int> keyboard;
    string s;
    while(q--)
    {
        cin >> s;
        for (int i = 0; i < 26; i++)
        {
            keyboard[s[i]] = i;
        }
        cin >> s;
        ll total = 0;
        for (int i = 1; i < s.size();i++)
        {
            total += abs(keyboard[s[i]] - keyboard[s[i - 1]]);
        }
        cout << total << '\n';
    }
}

/*

*/