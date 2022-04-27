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
        for (int i = 1; i <= n;i++)
        {
            if(n % 2 && i <= 3)
            {
                if(i==1)
                    cout << 3;
                else if(i==2)
                    cout << 1;
                else
                    cout << 2;
                cout << ' ';
            }
            else if(!(n%2) && i % 2)
                cout << i + 1 << ' ';
            else if(!(n%2) && !(i % 2))
                cout << i - 1 << ' ';
            else
            {
                (i % 2) ? cout << i - 1 : cout << i + 1;
                cout << ' ';
            }
        }
            cout << '\n';
    }
}

/*
1 2 3
1 3 2
3 1 2
*/