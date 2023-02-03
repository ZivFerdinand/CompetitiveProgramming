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

		if(x%2 == 0){
			while(!(x%2)){
				x/=2;
			}
			(x>1) ? cout << "YES":cout << "NO";
		}
		else
			cout << "YES";

		cout << '\n';
	}
}
/*

*/
