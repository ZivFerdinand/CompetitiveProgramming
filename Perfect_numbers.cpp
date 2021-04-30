#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n,total=0,cnt=0;
   	bool yes=true;
   	ll i=19,s;
   	cin >> n;


   	while(yes){
   		s=i;
   		total=0;
   		while(s>0){
   			total+=s%10;
   			s/=10;
   		}
   		if(total==10){
   			cnt++;
   		}
   		if(cnt==n){
   			yes=false;
   			cout << i;
   			break;
   		}
   		i++;
   	}
}
/*



*/