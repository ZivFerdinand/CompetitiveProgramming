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

	string s;	int x;
	while(n--){
		cin >> s >> x;
		if(s=="next"){
			if(x==0){
				cout << 99 << '\n';
			}
			else	cout << x-1 << '\n';
		}
		else{
			if(x==99){
				cout << 0 << '\n'; 
			}
			else	cout << x+1 << '\n';
		}
	}
}