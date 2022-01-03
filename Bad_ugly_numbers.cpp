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

    int n;
    while(q--)
    {
        cin >> n;
        if(n==1)
        {
            cout << -1 << '\n';
            continue;
        }

        cout << 2;
        for (int i = 1; i < n;i++)
            cout << 3;

        cout << '\n';
    }
}

/*
8 -> 1
4 -> 2
2 -> 3
6 -> 0


*/