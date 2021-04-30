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
	int n;
	cin >> n;

		for(int i=4;i<=100000;i++){
			int cnt=0,cnt1=0;
			for(int j=1;j<=i;j++){
				if(j*j>i)		break;
				if(i%j==0)		cnt1++;
			}
			for(int j=1;j<=n-i;j++){
				if(j*j>n-i)		break;
				if((n-i)%j==0)	cnt++;
			}

			if(cnt>=2 && cnt1>=2){
				cout << i << ' ' << n-i << '\n';
				break;
			}
		}

}
