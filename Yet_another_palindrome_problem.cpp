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

int arr[6000];

int main()
{
    int q;
    cin >> q;

    int n;
    while(q--)
    {
        bool ans = false;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 2; j < n; j++)
            {
                if (arr[i] == arr[j])
                {   ans = true;
                    break;
                }
            }

            if(ans)
                break;
        }

        (ans) ? cout << "YES" : cout << "NO";
        cout << '\n';
    }
}

/*
*/
