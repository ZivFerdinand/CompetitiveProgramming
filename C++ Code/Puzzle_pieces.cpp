#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int n,m;
   while(q--){
      cin >> n >> m;
      if(n==1 || m==1)
         cout << "YES\n";
      else if(n==m && n<=2)
         cout << "YES\n";
      else
         cout << "NO\n";
   }
}
/*



*/
