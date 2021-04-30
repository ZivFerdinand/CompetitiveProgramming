#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int a,b,c;
   while(q--){
      cin >> a >> b >> c;
      for(int i=0;i<b;i++){
         if(a<=20)
            break;
         a=(a/2)+10;
      }
      (c*10>=a) ? cout << "YES\n" : cout << "NO\n";
   }
} 
/*


*/
