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
	int t;
	cin >> t;

	while(t--){
		int a,b,c;
		cin >> a >> b >> c;

		if(abs(a-c)>abs(b-c))		cout << "Cat B\n";
		else if(abs(a-c)<abs(b-c))	cout << "Cat A\n";
		else						cout << "Mouse C\n";
	}
}