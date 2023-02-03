#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[60], B[60];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int maxx = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (B[i] % A[j] == 0)
                maxx = max(B[i] / A[j], maxx);
        }
    }
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (B[i] % A[j] == 0 && B[i] / A[j] == maxx)
                cnt++;
        }
    }
    cout << cnt;
}
/*
* 114114
* 14144
*/
