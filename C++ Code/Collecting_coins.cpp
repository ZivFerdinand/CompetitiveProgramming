#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q;
   	ll maxx,a,b,c,n;
   	cin >> q;

   	while(q--){
   		cin >> a >> b >> c >> n;
   		maxx=max(a,max(b,c));
   		n-=((maxx-a)+(maxx-b)+(maxx-c));
   		(n%3 || n<0) ? cout << "NO\n":cout << "YES\n";
   	}
}
/*



*/