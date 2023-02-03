#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	ll n,q,mid,x;
   	ll total=0;
   	cin >> q;

   	while(q--){
   		cin >> n;
   		total=0;
   		for(ll i=0;i<n;i++){
   			cin >> x;
   			total+=x;
   		}
   		cout << (total+n-1)/n << '\n';
   	}
}
/*



*/