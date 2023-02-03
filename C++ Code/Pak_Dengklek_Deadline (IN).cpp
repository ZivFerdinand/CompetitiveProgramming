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
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;

	if(n>=3600){
		cout << n/3600 << '\n';
		n-= (n/3600)*3600;
	}
	else{
		cout << 0 << '\n';
	}
	if(n>=60){
		cout << n/60 << '\n';
		n-= (n/60)*60;
	}
	else{
		cout << 0 << '\n';
	}
	
	cout << n << '\n';
}