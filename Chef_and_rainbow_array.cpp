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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[200];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int iii = 0, jjj = n - 1;
        bool b = true;
        
        if (a[0] != 1)
        {
            b = false;
        }
        while (iii < jjj)
        {
            if (a[iii] != a[iii + 1] && a[iii] + 1 != a[iii + 1])
            {
                b = false;
                break;
            }
            if (a[iii] != a[jjj])
            {
                b = false;
                break;
            }
            jjj--;
            iii++;
        }
        if (a[iii] != 7)
        {
            b = false;
        }
        if (b == true)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}
/*
0 1 2 3 4   = 5
0 1 2 3 4 5 = 6
*/