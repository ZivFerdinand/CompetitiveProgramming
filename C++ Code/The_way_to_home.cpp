#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n,d,lily=0,now=0,cnt=0;
   	string s;

   	cin >> n >> d >> s;
   	for(int i=0;i<n;i++){
   		if(s[i]=='1')	lily=i;
   		if(i-now==d){
   			cnt++;
   			now=lily;
   			if(i==n-1)
   				cnt--;
   		}
   		else if(i-now>d){
   			cout << -1;
   			return 0;
   		}
   	}	
   	cout << cnt+1;
}
/*
012345678

*/