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
	ios_base::sync_with_stdio(0);

	ll a,b;
	cin >> a >> b;

	if(a%2==0){
		if(b>a/2){
			b-=(a/2);
			cout << 2+(b-1)*2 << '\n';
		}
		else{
			cout << 1+(b-1)*2 << '\n';
		}
	}
	else{
		if(b>a-(a/2)){
			b-=(a-(a/2));
			cout << 2+(b-1)*2 << '\n';
		}
		else{
			cout << 1+(b-1)*2 << '\n';
		}
	}
}



// 5

// 1 3 5 2 4

// 7

// 1 3 5 7 2 4 6