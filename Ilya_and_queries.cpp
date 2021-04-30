#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
ll pref[100010];
int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	ll n,a,b,cnt=0;
   	string s;

   	cin >> s >> n;

   	for(int i=1;i<s.size();i++){
   		if(s[i]==s[i-1])
   			cnt++;
   		pref[i]=cnt;
   	}
   	pref[s.size()]=cnt+1;

   	while(n--){
   		cin >> a >> b;
   		cout << pref[b-1]-pref[a-1] << '\n';
   	}
}
/*
0 0 1 1 2 3


*/