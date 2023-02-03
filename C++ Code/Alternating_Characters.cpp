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

	string s;
	while(q--){
		cin >> s;

		int cnt=0;
		char rand=s[0];
		int s_len=s.size();
		for(int i=1;i<s_len;i++){
			if(s[i]==rand){
				cnt++;
			}
			else	rand=s[i];
		}

		cout << cnt << '\n';
	}
}
