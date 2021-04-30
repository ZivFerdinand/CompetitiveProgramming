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
	string s;
	cin >> s;

	int s_len=s.size();
	bool cont=false;
	for(int i=0;i<s_len;i++){
		if(i%2==0){
			if(s[i]=='L'){
				cont=true;
				break;
			}
		}
		else{
			if(s[i]=='R'){
				cont=true;
				break;
			}
		}
	}

	if(cont){
		cout << "No\n";
	}
	else{
		cout << "Yes\n";
	}
}
