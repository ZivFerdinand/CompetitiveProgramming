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

	int n,x;
	while(q--){
		cin >> n >> x;
		if(n<=2)
			cout << 1 << '\n';
		else{
			cout << ((n-3+x)/x) + 1 << '\n';
		}
	}
}
/*

*/
