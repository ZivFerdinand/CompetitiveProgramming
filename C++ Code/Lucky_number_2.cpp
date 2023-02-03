#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll recursive(ll n){
   if(n==1)
      return n;
   else{
      ll total=1;
      for(int i=0;i<n;i++)
         total*=2;
      return total+recursive(n-1);
   }
}
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n;
   cin >> n;

   cout << recursive(n)+1 << '\n';
} 
/*



*/
