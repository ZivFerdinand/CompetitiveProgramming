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
   int n;
   cin >> n;

   if(n==1)
      cout << 0 << '\n';
   else if(n==0)
      cout << 1 << '\n';
   else{
      for(int i=0;i<n%2;i++)
         cout << 4;
      for(int i=0;i<n/2;i++)
         cout << 8;
      cout << '\n';
   }
} 
/*  
 
 
 
*/
