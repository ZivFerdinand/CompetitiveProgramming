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
    int p, q;
    cin >> p >> q;

    long long x = p * p + q * q + 1;
    

    if(x %= 4)
        cout << -1 << '\n';
        else
            cout << x / 4 << '\n';
}
/*
   10 10 11 12 13
9  10 11 11 13
*/