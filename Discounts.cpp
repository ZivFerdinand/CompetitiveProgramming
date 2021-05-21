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
ll arr[500000];
ll prefix[500000];
int main(){
   ios_base::sync_with_stdio(false);
   int n;
   cin >> n;

   for(int i=0;i<n;i++){
      cin >> arr[i];
   }
   sort(arr,arr+n);
   prefix[0]=0;
   for(int i=0;i<=n;i++){
      prefix[i]+=prefix[i-1]+arr[i-1];
   }

   int x;
   int m;
   cin >> m;
   while(m--){
      cin >> x;
      ll total=prefix[n-x]+(prefix[n]-prefix[n-x+1]);
      cout << total << '\n';
   }
}
/* 
7 1 3 1 4 10 8
1 1 3 4 7 8 10
--

No Additional
*/
