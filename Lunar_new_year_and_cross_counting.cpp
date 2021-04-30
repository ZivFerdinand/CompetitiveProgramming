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
 	int n;
 	cin >> n;

 	string s[n+10];
 	for(int i=0;i<n;i++){
 		cin >> s[i];
 	}

 	ll cnt=0;
 	for(int i=1;i<n-1;i++){
 		for(int j=1;j<n-1;j++){
 			if(s[i][j]=='X'){
 				if(s[i-1][j-1]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]=='X' && s[i+1][j+1]=='X'){
 					cnt++;
 				}
 			}
 		}
 	}
 	cout << cnt << '\n';
}