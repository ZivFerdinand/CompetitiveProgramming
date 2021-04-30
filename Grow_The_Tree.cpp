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
ll arr[100010];

int main(){
   ios_base::sync_with_stdio(false);
   int n;
   cin >> n;

   ll x=0,y=0;
   for(int i=0;i<n;i++){
      cin >> arr[i];
   }
   sort(arr,arr+n);

   ll low=(n/2)-1;
   

   for(int i=0;i<=low;i++){
      y+=arr[i];
   }
   for(int i=low+1;i<n;i++){
      x+=arr[i];
   }

   cout << (x*x)+(y*y) << '\n';
}
/* 
0 1 2 


*/