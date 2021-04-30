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

ld arr[200000];
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n;
   cin >> n;

   for(int i=0;i<n;i++)
      cin >> arr[i];
   sort(arr,arr+n);

   ld odd=arr[(n/2)];
   ld even=(arr[(n/2)]+arr[(n/2)-1])/2;
   int a=(arr[(n/2)]+arr[(n/2)-1]);
   if(n%2)
      cout << odd << setprecision(1);
   else
      cout << even << setprecision(1);

   if(n%2 || !(a%2))
      cout << ".0";
   cout << '\n';
} 
/*  
 
 
 
*/