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
    int first, second;
    int q, x;

    int arr[200];
    cin >> q;

    while(q--)
    {
        second = first = -1;
        cin >> x;

        for (int i = 0; i < x;i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + x);

        for (int i = 0; i < x;i++)
        {
            if (abs(arr[i] - first) > 1)
                first = arr[i];
            else
                second = arr[i];
        }

        if (second != -1)
            cout << 2;
        else
            cout << 1;

        cout << '\n';
    }
}

/*
1 3 4 5 6

*/