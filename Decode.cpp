#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n,cnt;
   	string s,s2;
   	cin >> n >> s;

   	s2=s;
   	if(n%2){
   		s2[n/2]=s[0];
   		cnt=1;
   		for(int i=(n/2)-1;i>=0;i--){
   			s2[i]=s[cnt++];
   			s2[n-i-1]=s[cnt++];
   		}
   		cout << s2;
   	}
   	else{
   		s2[(n/2)-1]=s[0];
   		s2[(n/2)]=s[1];
   		cnt=2;
   		for(int i=(n/2)-2;i>=0;i--){
   			s2[i]=s[cnt++];
   			s2[n-i-1]=s[cnt++];
   		}
   		cout << s2;
   	}
}
/*
0 1 2 3 4
0 1 2 3
*/