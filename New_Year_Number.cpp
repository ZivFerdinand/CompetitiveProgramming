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

	ll x;
	while(q--){
		cin >> x;

		(x%2020 <= x/2020) ? cout << "YES\n":cout << "NO\n";
	}
}
/*
kalo x%2020
dan nilai mod nyo < x/2020
*/
