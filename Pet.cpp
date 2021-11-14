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
    ll arr[1000];
    for (int i = 0; i < 20;i++)
        cin >> arr[i];

    ll maxVal = 0, locVal = 0;

    for (int i = 0;i<20;i+=4)
    {
        ll x = 0;
        for (int j = i; j < i + 4;j++)
        {
            x += arr[j];
        }

        if(x>maxVal)
        {
            locVal = (i / 4) + 1;
            maxVal = x;
        }
    }

    cout << locVal << ' ' << maxVal << '\n';
}
/*

*/