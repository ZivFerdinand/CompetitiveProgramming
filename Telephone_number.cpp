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

	int n;	string s;
	while(q--){
		cin >> n >> s;

		if(n>=11){
			bool done=0;
			for(int i=0;i<n;i++){
				if(s[i]=='8'){
					if(n-i>=11){
						done=1;
					}
					break;
				}
			}

			(done) ? cout << "YES\n" : cout << "NO\n";
		}
		else	cout << "NO\n";
	}
}