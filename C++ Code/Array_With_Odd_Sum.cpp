#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int n,x;
   while(q--){
      cin >> n;
      int odd=0,even=0;
      for(int i=0;i<n;i++){
         cin >> x;
         if(x%2)
            odd++;
         if(!(x%2))
            even++;   
      }

      if(odd && even)
         cout << "YES\n";
      else if(odd%2)
         cout << "YES\n";
      else
         cout << "NO\n";
   }
} 
/*

ganjil=genap+ganjil
genap=genap+genap atau ganjil+ganjil
*/
