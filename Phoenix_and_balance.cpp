#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q,n;
   cin >> q;

   ll arr[50];
   arr[1]=2;
   for(int i=2;i<=30;i++){
      arr[i]=arr[i-1]*2;
   }
   
   while(q--){
      cin >> n;
      ll a,b;
      a=b=0;
      for(int i=1;i<n;i++){
         if(i<=(n/2)-1)
            a+=arr[i];
         else
            b+=arr[i];
      }
      a+=arr[n];
      cout << max(a,b)-min(a,b) << '\n';
   }
}
/*



*/