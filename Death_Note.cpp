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
	ll n,m;
	cin >> n >> m;

	ll arr[n+10],total_arr=0,total_swipe=0;
	for(ll i=0;i<n;i++){
		cin >> arr[i];
		total_arr+=arr[i];
		cout << (total_arr/m)-total_swipe << ' ';
		total_swipe=total_arr/m;
	}

	cout << '\n';
}