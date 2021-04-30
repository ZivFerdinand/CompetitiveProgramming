#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q;
   	cin >> q;

   	ll x,y,n;
   	while(q--){
   		cin >> x >> y >> n;
   		((x*((n/x)-1))+y) > 0 ? ((x*((n/x)))+y > n ? cout << (x*((n/x)-1))+y : cout << (x*((n/x)))+y): cout << (x*((n/x)-1))+y+x;
   		cout << '\n';
   	}	
}
/*



*/