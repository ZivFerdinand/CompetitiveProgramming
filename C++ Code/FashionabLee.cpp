#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q;
   	cin >> q;

   	ll n;
   	while(q--){
   		cin >> n;
   		!((n-4)%4) ? cout << "YES\n":cout << "NO\n";
   	}
}
/*


*/