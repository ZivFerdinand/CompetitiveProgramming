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
    int n = 9, x;
    ll cnt;
    while(cin >> x)
    {
        cnt = 0;
        if(x==0 && n==0)
        {
            continue;
        }

        int i, j, k, l;
        for (i = 0; i <= n/* && i + j + k <= x*/; i++)
        {
            for (j = 0; j <= n/* && i + j + k <= x*/;j++)
            {
                for (k = 0; k <= n/* && i + j + k <= x*/;k++)
                {
                    for (l = 0; l <= n/* && i + j + k <= x*/;l++)
                    {
                        if(i+j+k+l==x)
                            cnt++;
                    }
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