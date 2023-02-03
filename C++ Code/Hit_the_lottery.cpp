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
int cnt=0;
ll recursive(ll n){
   if(n>=100){
      cnt+=(n/100);
      recursive(n-(100*(n/100)));
   }
   else if(n>=20){
      cnt+=(n/20);
      recursive(n-(20*(n/20)));
   }
   else if(n>=10){
      cnt+=(n/10);
      recursive(n-(10*(n/10)));
   }
   else if(n>=5){
      cnt+=(n/5);
      recursive(n-(5*(n/5)));
   }
   else
      cnt+=n;
}
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   ll n;
   cin >> n;
   recursive(n);
   cout << cnt << '\n';
} 
/*



*/
