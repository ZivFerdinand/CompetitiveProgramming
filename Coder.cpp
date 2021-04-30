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

   	string s,s1;
   	int c=0;
   	for(int i=0;i<n;i++){
   		if(i==0){
   			s+="C";
   		}
   		else if(s[i-1]=='.'){
   			s+="C";
   		}
   		else{
   			s+=".";
   		}
   	}
   	for(int i=0;i<n;i++){
   		if(s[i]=='.'){
   			s1+="C";
   		}
   		else{
   			s1+=".";
   		}
   	}

   	cout << pow(n/2,2)+pow(n-(n/2),2) << '\n';
   	for(int i=0;i<n;i++){
   		cout << s << '\n';
   		if(i<n-1){
   			cout << s1 << '\n';
   			i++;
   		}
   	}
}