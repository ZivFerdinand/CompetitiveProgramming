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
	int n;
	cin >> n;

	string s;
	cin >> s;

	int inside=0;	bool sm,bg,nb,un;
	sm=bg=nb=un=0;
	for(int i=0;i<n;i++){
		if(s[i]>=97 && s[i]<=122 && !sm){			inside++;sm=1;}
		else if(s[i]>=65 && s[i]<=90 && !bg){		inside++;bg=1;}
		else if(s[i]>=48 && s[i]<=57 && !nb){		inside++;nb=1;}
		else if(s[i]>=33 && s[i]<=47 && !un){ 		inside++;un=1;}
	}

	if(n<6){
		cout << max(6-n,abs(4-inside));
	}
	else{
			cout << abs(4-inside);
	}
	cout << '\n';
}
