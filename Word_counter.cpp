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
	getline(cin,s);

	ll s_size=s.size();	ll word=1;
	for(int i=0;i<s_size;i++){
		if(s[i]==32){
			word++;
		}
	}

	cout << word << '\n';
}