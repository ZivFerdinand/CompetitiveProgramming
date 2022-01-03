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

int arr[800];

int main()
{
    int total = 0;
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if(i<n-1)
        {
            int x = arr[i] + arr[i + 1];
            if(x<k)
            {
                total += k - x;
                arr[i + 1] += k - x;
            }
        }
    }

    cout << total << '\n';

    for (int i = 0; i < n;i++)
    {
        cout << arr[i];
        if(i<n-1)
            cout << ' ';
    }
}

/*
x x x x 

*/