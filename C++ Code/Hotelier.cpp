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
 	
 	int n;
 	cin >> n;

 	string s;
 	cin >> s;

 	string temp = "0000000000";

 	for(int i=0;i<n;i++){
 		if(s[i]=='L'){
 			for(int j=0;j<10;j++){
 				if(temp[j]=='0'){
 					temp[j]='1';
 					break;
 				}
 			}
 		}
 		else if(s[i]=='R'){
 			for(int j=9;j>=0;j--){
 				if(temp[j]=='0'){
 					temp[j]='1';
 					break;
 				}
 			}
 		}
 		else{
 			temp[(int) s[i] - 48]='0';
 		}
 	}

 	cout << temp << '\n';
}