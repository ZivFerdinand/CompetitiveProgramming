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
		cnt=0;
		for(int i=to_string(n).length();i>=1;i--)
			cnt+=i;
		cnt+=10*((n%10)-1);

		cout << cnt << endl;
	}
}
/*
9890123456789012345

*/