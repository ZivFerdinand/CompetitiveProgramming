#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   ll q;
   cin >> q;

   ll x;
   while(q--){
      cin >> x;

      if(x-(x/2)!=x/2)
         cout << x/2 << '\n';
      else
         cout << (x/2)-1 << '\n';
   }
} 
/*

nc
*/
