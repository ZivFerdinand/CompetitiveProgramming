#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   int n,l,r;
   cin >> n >> l >> r;

   l--;
   ll total_min=0,total_max=1;
   ll x=2;
   for(int i=0;i<l;i++){
      total_min+=x;
      x*=2;
   }
   total_min+=(n-l);

   r--;
   x=2;
   for(int i=0;i<r;i++){
      total_max+=x;
      x*=2;
   }
   x/=2;
   r++;
   for(int i=r;i<n;i++){
      total_max+=x;
   }

   cout << total_min << ' ' << total_max << '\n';
}
/* 
(n/2)*(a+un)+1

*/