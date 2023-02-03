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
    int n,x;
    cin >> n;
    x = 1;
    for (int i = 0; i < n;i++)
        x *= 2;

    cout << (x+1)*(x+1) << '\n';
}
/*

*/