#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   ll n,k,Un,rand;
   while(q--){
      cin >> n >> k;
      Un=0;
      if(!(n%2)){
         Un=n+((k-1)*2);
      }
      else{
         k--;
         rand=0;
         for(ll i=3;i<=sqrt(n);i++){
            if(!(n%i)){
               rand=i;
               break;
            }
         }
         if(!rand)
            Un=(n*2)+((k-1)*2);
         else
            Un=(n+rand)+((k-1)*2);
      }
      Un+=2;
      cout << Un << '\n';
   }

}
/*



*/
