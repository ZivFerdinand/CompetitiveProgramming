#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;
	
	while(n--){
		ll a,b,c;
		cin >> a >> b >> c;

		ll x = (b+c)-a;
		b-=x;
		c-=x;

		cout << max(b,c)+1 << '\n';
	}
}