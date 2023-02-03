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
		int n;
		cin >> n;

		if(n<38)	cout << n << '\n';
		else{
			if(n%5<3)	cout << n << '\n';
			else		cout << n+(5-(n%5)) << '\n';
		}
	}
}
