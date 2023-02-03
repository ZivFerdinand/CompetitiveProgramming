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
   	ll n;
   	cin >> n;

   	string s;
   	cin >> s;

   	ll cnt=0;
   	for(ll i=0;i<n;i++){
   		if(i>0){
   			if(s[i]==s[i-1] && i%2==1){
   				if(s[i]=='a')	s[i]='b';
   				else			s[i]='a';
   				cnt++;
   			}
   		}
   	}
   	cout << cnt << '\n' << s << '\n';
}	