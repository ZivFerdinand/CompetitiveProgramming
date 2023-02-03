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

ll arr[100010] = {};

int main(){
    int n, q, l, r, cnt;
    cin >> n >> q;

    string s;
    cin >> s;

    
    for (int i = 0; i <= n; i++)
    {
        if(!i)
        {
            arr[i+1] = (int)s[i] - 96;
        }
        else
            arr[i+1] = arr[i] + (int)s[i] - 96;
    }
    arr[0] = 0;

    while(q--)
    {
        cin >> l >> r;
        cout << arr[r]-arr[l-1] << '\n';
    }
}
/*

*/