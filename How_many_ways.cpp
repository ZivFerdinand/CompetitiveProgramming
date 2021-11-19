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
    int n, x;
    ll cnt;
    while(cin >> n >> x)
    {
        cnt = 0;
        if(x==0 && n==0)
        {
            continue;
        }

        int i = 1, j = 2, k = 3;
        for (i = 1; i <= n/* && i + j + k <= x*/; i++)
        {
            for (j = i + 1; j <= n/* && i + j + k <= x*/;j++)
            {
                for (k = j + 1; k <= n/* && i + j + k <= x*/;k++)
                {
                    if(i+j+k==x)
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }
}
/*
0 1 2 3 4   = 5
0 1 2 3 4 5 = 6
*/