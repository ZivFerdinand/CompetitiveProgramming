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

int arr[100010] = {};
bool found[100010] = {};
int sett[100010] = {};

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0;i--)
    {
        if(!found[arr[i]])
        {
            if(i==n-1)
                sett[i]++;
            else
                sett[i] += 1 + sett[i + 1];

            found[arr[i]] = 1;
        }
        else
            sett[i] = sett[i + 1];
    }

    while(m--)
    {
        int x;
        cin >> x;

        cout << sett[x-1] << '\n';
    }
}

/*
......
123456
4
3 4
2 3
1 6
2 6

#..###
010123
5
1 3
5 6
1 5
3 6
3 4

*/
