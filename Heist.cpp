#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;

    ll arr[n+10];
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    }

    sort(arr,arr+n);

    cout << arr[n-1] - arr[0] + 1 - n << '\n';
}