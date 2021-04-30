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
#define ld long long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   ll a,b;
   cin >> a >> b;

   ll n=b/a;
   if(n==1 && b%a==0)
      cout << 0 << '\n';
   else if(b%a==0 && (n%3==0 || n%2==0)){
      int cnt=0;
      while(n%2==0){
         cnt++;
         n/=2;
      }
      while(n%3==0){
         cnt++;
         n/=3;
      }

      if(n>1)
         cout << -1 << '\n';
      else
         cout << cnt << '\n';
   }
   else
      cout << -1 << '\n';
} 
/*  
 
 
 
*/