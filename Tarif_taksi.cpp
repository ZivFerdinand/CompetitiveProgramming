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
	
	int n;
	cin >> n;

	int a,b,c;
	while(n--){
		cin >> a >> b >> c;

		if(c<=2000){
			cout << a << '\n';
		}
		else{
			int total=a;

			c-=2000;
			total+=(c/100)*b;

			cout << total << '\n';
		}
	}
}

