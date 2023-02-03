#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	ll n;
	cin >> n;
	
	if(n%2==0){
		cout << n/2 << '\n';
	}
	else{
		cout << (n/2)-n << '\n';
	}
}