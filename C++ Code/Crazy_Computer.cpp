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

	ll c;
	cin >> c;

	ll arr[n+10],total=0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(i==0)	total++;
		else{
			if(arr[i]-arr[i-1]>c)	total=1;
			else					total++;
		}
	}
	cout << total << '\n';
}
