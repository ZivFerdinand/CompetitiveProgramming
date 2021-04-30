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
 	int cnt=0;

	for(int i=0;i<s_len;i++){
 		if(s[i]=='4' || s[i]=='7'){
 			cnt++;
 		}
	}
	
	if(cnt == 4 || cnt == 7){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}

	
}
