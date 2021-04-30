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
 	char keyboard[40]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

 	char a;
 	int pos;
 	
 	cin >> a;

 	if(a=='R')
 		pos=-1;
 	else
 		pos=1;

 	string s;
 	cin >> s;

 	int s_len=s.size();

 	for(int i=0;i<s_len;i++){
 		for(int j=0;j<=30;j++){
 			if(s[i]==keyboard[j])
 				cout << keyboard[j+pos];
 		}
 	}

 	cout << '\n';
}
