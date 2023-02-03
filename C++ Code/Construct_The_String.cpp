#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   ll q;
   cin >> q;
   
   ll a,b,c;
   while(q--){
      cin >> a >> b >> c;
         int cnt=97;
         for(int i=0;i<a;i++){
            cout << char(cnt++);
            if(cnt==97+c)   cnt=97;
         }
         cout << '\n';
      
   }
} 
/*


*/