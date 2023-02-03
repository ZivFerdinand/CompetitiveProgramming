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
    int n;
    cin >> n;

    int x;
    ll leftToRight = 0;
    ll rightToLeft = 0;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> x;

            if(i == j)
            {
                leftToRight += x;
            }
            if((i + j) == (n - 1))
            {
                rightToLeft += x;
            }
        }
    }

    // cout << rightToLeft << '\n'
    //      << leftToRight << '\n';
    cout << abs(rightToLeft - leftToRight) << '\n';
}
/*

*/