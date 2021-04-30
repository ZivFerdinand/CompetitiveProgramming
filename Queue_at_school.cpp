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
 	
 	int n,t;
 	cin >> n >> t;

 	string s;
 	cin >> s;

 	while(t--){
 		for(int i=0;i<n;i++){
 			if(i+1!=n && s[i]=='B' && s[i+1]=='G'){
 				swap(s[i],s[i+1]);
 				i++;
 			}
 		}
 	}

 	cout << s << '\n';
}
