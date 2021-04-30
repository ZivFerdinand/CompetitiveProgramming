#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);    cout.tie(NULL);
 	string s;
 	bool found=false;

 	cin >> s;

 	for(int i=1;i<s.size();i++){
 		if(s[i]<s[i-1] && !found){
 			found=true;
 			int j=i-1;
 			char x=(int)s[i-1]-1;
 			while(s[j]>x){
 				s[j]=x+1;
 				j--;
 			}
 			s[j+1]=x;
 		}
 		if(found)
 			s[i]='9';
 	}

 	found=false;
 	for(int i=0;i<s.size();i++){
 		if(s[i]>48 && !found)
 			found=true;
 		if(found)
 			cout << s[i];
 	}
 	cout << '\n';
 		
}
/*
673 669
146851 146799
13347782466 13347779999
*/