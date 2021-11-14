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
    int a,b;
    cin >> a >> b;

    int xx = min((a + b) - 1, 10);
    cout << xx - a << ' ' << xx - b << '\n';
}
/*

*/