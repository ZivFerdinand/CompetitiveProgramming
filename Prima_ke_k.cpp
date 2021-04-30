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

bool prime[1000010];
ll arr[1000010];

ll func(){
   int k=1;
   for(ll i=2;i<=1000000;i++){
      if(prime[i]){
         for(ll j=i+i;j<=1000000;j+=i){
            prime[j]=false;
         }
         arr[k++]=i;
      }
   }
}
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   memset(prime,true,sizeof prime);
   func();
   int t,x;
   cin >> t;
   while(t--){
      cin >> x;
      cout << arr[x] << '\n';
   }
} 
/*



*/