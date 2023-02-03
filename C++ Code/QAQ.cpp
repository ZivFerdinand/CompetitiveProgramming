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
   	string s;
   	cin >> s;

   	ll s_len=s.length();
   	while(s_len--){
   		if(s[s_len]!='Q' && s[s_len]!='A'){
   			s.erase(s_len,1);
   		}
   	}

   	s_len=s.size();	int cnt=0;
   	for(int i=0;i<s_len;i++){
   		if(s[i]=='Q'){
   			for(int j=i+1;j<s_len;j++){
   				if(s[j]=='A'){
   					for(int k=j+1;k<s_len;k++){
   						if(s[k]=='Q')	cnt++;
   					}
   				}
   			}
   		}
   	}

   	cout << cnt << '\n';
}
