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
	int n,k;
	cin >> n >> k;

	int x,max_limit=0;
	while(n--){
		cin >> x;
		if(x>max_limit){
			max_limit=x;
		}
	}

	(max_limit>k) ?
		cout << abs(k-max_limit) << '\n':
		cout << 0 << '\n';
	
}