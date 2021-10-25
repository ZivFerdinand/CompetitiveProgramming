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
    int n,d;
    cin >> n >> d;

    if(d==1)
        cout << "NO\n";
        else
            cout << "YES\n";
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