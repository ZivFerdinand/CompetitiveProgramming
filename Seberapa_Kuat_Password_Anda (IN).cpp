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

	bool AA,aa,digits,unknown;	AA=aa=digits=unknown=0;
	ll s_len=s.size();
	for(int i=0;i<s_len;i++){
		if(s[i]>=65 && s[i]<=90){
			AA=1;
		}
		else if(s[i]>=97 && s[i]<=122){
			aa=1;
		}
		else if(s[i]>=48 && s[i]<=57){
			digits=1;
		}
		else{
			unknown=1;
		}
	}

	if(AA && aa && digits && unknown && s_len>=8){
		cout << "Kuat\n";
	}
	else if(s_len>12 && (AA || aa) && !digits && !unknown){
		cout << "AgakKuat\n";
	}
	else{
		cout << "Lemah\n";
	}
}
