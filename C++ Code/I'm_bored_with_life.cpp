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
	ll a,b;
	cin >> a >> b;

	ll c=min(a,b);
	ll total=1;
	for(int i=1;i<=c;i++){
		total*=i;
	}
	cout << total << '\n';
}
