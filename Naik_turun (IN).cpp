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
	ll n,q;
	cin >> n >> q;
	
	ll arr[n+10];
	int a,b,c;	ll first,last;	first=last=0;
	while(q--){
		cin >> a >> b >> c;

		if(a==1){
			first+=c;
			if(b==n){
				last+=c;
			}
		}
		else{
			last-=c;
			if(b==n){
				first-=c;
			}
		}
	}

	first=abs(first);	last=abs(last);
	(first>last) ? cout << first << '\n' : cout << last << '\n';
}
