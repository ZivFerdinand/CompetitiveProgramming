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

	string s,s1;
	cin >> s >> s1;

	int s_len = s.size();

	for(int i=0;i<s_len;i++){
		if(s[i]==s1[i]){
			cout << '0';

			if(!(i<s_len-1)){
				cout << '\n';
			}
		}
		else{
			cout << '1';

			if(!(i<s_len-1)){
				cout << '\n';
			}
		}
	}

}
