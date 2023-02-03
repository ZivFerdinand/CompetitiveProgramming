#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n;
   cin >> n;

   int ans=0;
   for(int i=1;i<=n;i++){
      if(i==n && ans==1){
         ans=n;
      }
      else if(n%i==0 && i!=n){
         ans=i;
      }
   }

   cout << n/ans << ans << '\n';
} 
/*



*/
