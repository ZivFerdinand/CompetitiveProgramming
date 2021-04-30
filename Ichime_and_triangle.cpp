#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   ll a,b,c,d;
   while(q--){
      cin >> a >> b >> c >> d;
      cout << b << ' ' << c << ' ' << min(c,max(b,c)+1) << '\n';
   }
} 
/*


*/
