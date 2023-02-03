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

   ll first_gcd,arr[n+10];
   for(int i=0;i<n;i++){
      cin >> arr[i];
      if(i)
         first_gcd=first_gcd*arr[i] / __gcd(first_gcd,arr[i]);
      else
         first_gcd=arr[i];
   }

   cout << first_gcd << '\n';
} 
/*



*/