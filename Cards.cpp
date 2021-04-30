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
	int s_len;	string s;
	cin >> s_len >> s;
	
	int z,e,r,o,n;		z=e=r=o=n=0;
	for (int i = 0; i < s_len; ++i){
		if(s[i]=='z')		z++;
		else if(s[i]=='e')	e++;
		else if(s[i]=='r')	r++;
		else if(s[i]=='o')	o++;
		else				n++;
	}

	int zero;
	zero=min(min(e,z),min(o,min(r,z))) ;
	
	z-=zero;	e-=zero; 	o-=zero;
	
	int one;
	one=min(min(n,o),min(o,min(n,e))) ;

	for(int i=0;i<one;i++){
		if(i<one-1){
			cout << 1 << ' ';
		}
		else{
			if(zero==0){
				cout << 1 << '\n';
			}
			else{
				cout << 1 << ' ';
			}
		}
	}
	for(int i=0;i<zero;i++){
		if(i<zero-1){
			cout << 0 << ' ';
		}
		else{
			cout << 0 << '\n';
		}
	}
}
