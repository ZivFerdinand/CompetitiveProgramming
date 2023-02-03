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
    string a, b;
    cin >> a >> b;

    ll total = 0;
    for (int i = 0; i < a.size();i++)
    {
        for (int j = 0; j < b.size();j++)
        {
            int aa = (int)a[i]-48;
            int bb = (int)b[j]-48;

            total += aa * bb;
        }
    }
    cout << total << '\n';
}
/*
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
-1  0  0  0  0  0 -1  0  0  0
-1  0  0 -1 -1  0  0  0 -1 -1
-1 -1  0  0 -1 -1 -1  0  0 -1
-1  0  0  0 -1  0 -1 -1 -1 -1
-1  0 -1  0 -1  0 -1  0  0 -1
-1  0 -1  0 XX  0  0  0 -1 -1
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
*/