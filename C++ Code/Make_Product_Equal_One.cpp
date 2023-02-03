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

   ll total=0;
   int pos=0,neg=0,zer=0;
   for(int i=0;i<n;i++){
      cin >> arr[i];
      if(arr[i]>0){
         total+=arr[i]-1;
         pos++;
      }
      else if(arr[i]<0){
         total+=-1-arr[i];
         neg++;
      }
      else{
         total++;
         zer++;
      }
   }

   if(neg%2==1){
      if(zer>0){
         cout << total << '\n';
      }
      else{
         cout << total+2 << '\n';
      }
   }
   else{
      cout << total << '\n';
   }
}
/* 
neg=5;
zer=1;
pos=



*/