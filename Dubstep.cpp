#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
 	
 	string s;
 	cin >> s;

 	int s_len=s.size();

 	for(int i=0;i<s_len;i++){
 		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
 			int j=0;
 			
 			for(j=i;j<s_len;j+=3){
 				if(s[j]=='W' && s[j+1]=='U' && s[j+2]=='B')	continue;
 				else 										break;
 			}

 			j-=i;

 			if(i==0){
 				s.erase(i,j);
 			}
 			else{
 				s[i]=' ';
 				s.erase(i+1,j-1);
 			}
 			
 			s_len=s.size();
 		}
 	}
 	
 	cout << s << '\n';
}
