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
   int n,m,min_limit;
   ll arr[200000];

   cin >> n >> m;
   for(int i=0;i<n;i++)
      cin >> arr[i];

   sort(arr,arr+n);
   min_limit=arr[n-1]-arr[0];
   for(int i=m-1;i<n;i++){
      if(arr[i]-arr[i-m+1]<min_limit)
         min_limit=arr[i]-arr[i-m+1];
   }
   cout << min_limit << '\n';
} 
/*  
1 3 4 5 6
3
2
2


*/
