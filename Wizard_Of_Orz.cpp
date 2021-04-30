#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <numeric>
using namespace std;


int main(){	
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;

	int n,cnt;
	while(t--){
		cin >> n;
		cnt=9;

		for(int i=1;i<=n;i++){
			if(i==1)
				cout << cnt--;
			else{
				if(cnt>9)cnt=0;
				cout << cnt++;
			}
		}
		cout << '\n';
	}
}
/*
9890123456789012345

*/