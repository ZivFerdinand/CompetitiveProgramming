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
    ll n, arr[10000];
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << endl;
    }
}
/*

*/