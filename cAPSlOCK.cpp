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

 	int uppercase;

 	uppercase=0;

 	for(int i=0;i<s.size();i++){
 		if(s[i]==toupper(s[i])){
 			uppercase++;
 		}
 	}

 	if(uppercase==s.size()){
 		for(int i=0;i<s.size();i++){
 			s[i]=tolower(s[i]);
 		}

 		cout << s << '\n';
 	}
 	else if(uppercase==s.size()-1 && s[0]==tolower(s[0])){
 		s[0]=toupper(s[0]);
 		for(int i=1;i<s.size();i++){
 			s[i]=tolower(s[i]);
 		}

 		cout << s << '\n';
 	}
 	else{
 		cout << s << '\n';
 	}
}
