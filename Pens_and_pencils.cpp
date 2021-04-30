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

	while(q--){
		int a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;

		int total=0,total2=0;
		total+=a/c;
		if(a%c)	total++;

		total2+=b/d;
		if(b%d)	total2++;

		if(total+total2<=e){
			cout << total << ' ' << total2 << '\n';
		}
		else{
			cout << "-1\n";
		}
	}
}