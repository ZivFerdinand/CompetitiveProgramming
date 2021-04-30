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
	int n,m;
	cin >> n >> m;

	int a,cnt=0;
	for(int i=1;i<=n;i++){
		bool on=0;
		for(int j=1;j<=2*m;j++){
			cin >> a;
			if(j%2==1){
				if(a)	on=true;
			}
			if(j%2==0){
				if(a)	on=true;
				if(on)	cnt++;
				on=false;
			}
		}
	}
	cout << cnt << '\n';
}
