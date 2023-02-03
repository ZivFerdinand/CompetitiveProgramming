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

int main(){
    int n, m, cnt, x;
    cin >> n >> m;

    int arr[110] = {};

    for (int i = 0; i < n;i++)
    {
        cnt = 0;
        for (int j = 0; j < m;j++)
        {
            cin >> x;
            cnt += x;
            cout << x << ' ';

            arr[j] += x;
        }
        cout << cnt << '\n';
        arr[m] += cnt;
    }

    for (int i = 0; i <= m;i++)
    {
        cout << arr[i];
        if(i<m)
            cout << ' ';
    }
    cout << '\n';
}
/*

*/