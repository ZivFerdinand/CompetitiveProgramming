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
	int t;
	cin >> t;

	while(t--){
		int n,minimum;
		cin >> n >> minimum;

		int cnt=0,x;
		for(int i=0;i<n;i++){
			cin >> x;
			if(x<=0)	cnt++;
		}
		(cnt>=minimum)?	cout << "NO\n" : cout << "YES\n";
	}
}
