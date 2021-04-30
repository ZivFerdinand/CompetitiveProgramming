#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int a,b;
   while(q--){
      cin >> a >> b;
      if(a>b){
         swap(a,b);
         if(!(b%a))
            cout << 0 << '\n';
         else{
            cout << (((b/a)+1)*a)-b << '\n';
         }
      }
      else{
         cout << b-a << '\n';
      }
   }
} 
/*



*/
