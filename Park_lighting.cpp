#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q,n,m;
   	cin >> q;

   	while(q--){
   		cin >> n >> m;
   		cout << (n*m/2)+((n*m)%2 ? 1:0) << '\n';
   	}
}
/*



*/