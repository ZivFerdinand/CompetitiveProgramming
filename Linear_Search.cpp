#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <deque>
#define ll long long
using namespace std;

int main(){
    int n, d, x;
    cin >> n >> d;

    int i = 0;
    while(n--)
    {
        cin >> x;
        if(x == d)
        {
            cout << i << '\n';
            return 0;
        }
        i++;
    }

    cout << -1 << '\n';
}	 

/*
10 3 5 1
*/
