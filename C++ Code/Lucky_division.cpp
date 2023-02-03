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
 	
 	int s[15];
	
	s[0]= 4;
	s[1]= 7;
	s[2]= 44;
	s[3]= 47;
	s[4]= 74;
	s[5]= 77;
	s[6]= 444;
	s[7]= 447;
	s[8]= 474;
	s[9]= 477;
	s[10]= 744;
	s[11]= 747;
	s[12]= 774;
	s[13]= 777;

	ll a;

	cin >> a;
	
	bool cont=true;

	for(int i=0;i<14;i++){
		if(a==s[i] || a%s[i]==0){
			cont = false;
			cout << "YES\n";
			break;
		}
	}
	if(cont){
		cout << "NO\n";
	}

	
}
