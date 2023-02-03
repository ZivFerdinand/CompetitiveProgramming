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
   int n,k;
   cin >> n >> k;

   int arr[n+10];
   for(int i=0;i<n;i++)
      cin >> arr[i];
   sort(arr,arr+n);
   cout << arr[k-1] << '\n';
} 
/*



*/
