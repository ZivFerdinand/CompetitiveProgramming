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
    int q;
    cin >> q;

    string s;
    while(q--)
    {
        cin >> s;

        s[0] = s[s.size() - 1];

        cout << s << '\n';
    }
}
/*
aabbbabaa
*/