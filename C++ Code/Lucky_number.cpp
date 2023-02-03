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
ll total=0;
ll recursion(int n){
   if(n==1){
      total+=2;
      return total;
   }
   else{
      ll rand=1;
      for(int i=0;i<n;i++)
         rand*=2;
      total+=rand;
      return recursion(n-1);
   }
}
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n;
   cin >> n;
   cout << recursion(n) << '\n';
} 
/*  
1 = 2
2 = 4
3 = 8
 
*/