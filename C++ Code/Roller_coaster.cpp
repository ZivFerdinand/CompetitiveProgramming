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
	int n,k;
	cin >> n >> k;

	int x,cnt=0;
	while(n--){
		cin >> x;
		if(x>=k){
			cnt++;
		}
	}

	cout << cnt << '\n';
}
