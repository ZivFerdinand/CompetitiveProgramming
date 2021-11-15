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
    int q;
    cin >> q;

    ll n, h, x;
    ll max1, max2;
    while(q--)
    {
        cin >> n >> h;
        max1 = max2 = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> x;
            if(x>max1)
            {
                max2 = max1;
                max1 = x;
            }
            else if(x>=max2)
                max2 = x;
        }

        if(h-max1 < 0)
        {
            cout << 1 << '\n';
            continue;
        }
        else
        {
            int ans = h / (max2 + max1);
            if(h%(max2+max1))
                ans++;

            int xx = 0;
            if(h-(ans*(max1+max2)) + max2 <= 0)
                xx=1;
            cout << ans*2-xx<< '\n';
        }
    }
}
/*

*/