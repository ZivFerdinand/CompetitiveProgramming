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
using namespace std;

int main()
{
    int q;
    cin >> q;

    string s;
    int arr[5];
    while(q--)
    {
        memset(arr, 0, sizeof arr);
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            arr[s[i] - 65]++;
            
        if (arr[0] + arr[2] == arr[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
/*
32
10 11

*/