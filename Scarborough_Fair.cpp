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
	int n,m;	string s;
	cin >> n >> m >> s;

	while(m--){
		int l,r;	char c1,c2;
		cin >> l >> r >> c1 >> c2;

		for(int i=l-1;i<r;i++){
			if(s[i]==c1){
				s[i]=c2;
			}
		}
	}

	cout << s << '\n';
}
