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

int arr[10010];

int main()
{
    int n,b;
    char a;
    cin >> n >> a >> b;

    string up = string(n, (char)(b+48));
    string mid = (char)(b + 48) + string(n - 2, a) + (char)(b + 48);

    for (int i = 1; i <= n;i++)
    {
        if(i==1||i==n)
            cout << up;

        else if (n % 2 && i - 1 == n / 2)
        {
            string x = mid;
            x[n / 2] = '*';
            cout << x;
        }

        else
            cout << mid;

        cout << '\n';
    }
}

/*
88888
8aaa8
8aaa8
8aaa8
8aaa8
88888
*/
