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

   string s[1050],rand;
   for(int i=0;i<n;i++){
      cin >> s[i];
      rand=s[i];
      if(i)
         sort(s,s+i+1);

      int l=0,r=i;
      while(true){
         int med=(l+r)/2;
         if(s[med]==rand){
            cout << med+1 << '\n';
            break;
         }
         else if(s[med]<rand)
            l=med+1;
         else
            r=med-1;
      }
   }
} 
/*



*/
