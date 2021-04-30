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
   int n;
   cin >> n;

   int arr[n+10];
   for(int i=0;i<n;i++){
      cin >> arr[i];
   }

   int cnt=0;
   int max_limit=0;
   int i=0;
   int rand=n;
   n*=2;
   while(n--){
      if(i==rand) i=0;
      if(arr[i]==1){
         cnt++;
      }
      else{
         cnt=0;
      }
      if(cnt>max_limit) max_limit=cnt;
      i++;
   }  

   cout << max_limit << '\n';
}
/* 


*/