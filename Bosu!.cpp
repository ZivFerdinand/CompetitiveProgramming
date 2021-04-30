#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	int q;
	cin >> q;

	long long a;
	int cnt=1;
	
	while(q--){
		cin >> a;

		long long sum=0;

		for(int i=a;i>=1;i--){
			sum+=i;
		}

		cout << "Case #" << cnt << ": " << sum << '\n';

		cnt++;
	}	
}
