#include <iostream> 
#include <algorithm> 
#include <cmath> 
#include <string> 
#include <cstring> 
#include <iomanip> 
#include <map> 
#include <cstdio> 
#include <sstream> 
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   ll x;
   while(q--){
      cin >> x;
      if(sqrt(x)==trunc(sqrt(x)) && x!=1){
         int num=sqrt(x);
         int cnt=0;
         for(int i=1;i<=sqrt(num);i++){
            if(!(num%i))
               cnt++;
         }
         if(cnt==1)
            cout << "YES\n";
         else
            cout << "NO\n";
      }
      else{
         cout << "NO\n";
      }
   } 
} 
/*

*/
