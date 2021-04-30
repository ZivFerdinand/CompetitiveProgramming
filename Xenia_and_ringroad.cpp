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
   int n,m;
   cin >> n >> m;

   ll total=0;
   int arr[m+10];
   for(int i=0;i<m;i++){
      cin >> arr[i];

      if(!i)   total+=arr[i]-1;
      else{
         if(arr[i]>=arr[i-1])
            total+=abs(arr[i]-arr[i-1]);
         else{
            total+=abs(n-arr[i-1]);
            total+=arr[i];
         }
      }
   }
   cout << total << '\n';
} 
/*


*/
