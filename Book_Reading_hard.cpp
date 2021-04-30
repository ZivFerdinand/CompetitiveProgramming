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
   ll a,b,total=0;
   cin >> q;
   while(q--){
      cin >> a >> b;
      total=0;
      if(b>a)
         cout << 0 << '\n';
      else if(b==a)
         cout << b%10 << '\n';
      else{
            ll limit=a/(b*10);
            ll one_till_ten=0;
            for(int i=1;i<=10;i++){
               one_till_ten+=((i*b)%10);
            }
            total+=(one_till_ten*limit);
            limit*=(b*10);
            int i=1;
            while(true){
               if((i*b)>(a-limit))
                  break;
               total+=((i*b)%10);  
               i++;
            }
         cout << total << '\n';
      }
   }
} 
/*  
 
 
 
*/
