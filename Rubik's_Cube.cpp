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
	int q;
	cin >> q;

	ll n;
	while(q--){
		cin >> n;
		cout << pow(n,3)-pow(n-2,3) << '\n';
	}
}