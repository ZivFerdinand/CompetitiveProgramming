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
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   int n,k;
   cin >> n >> k;

   int arr[n+10];
   for(int i=0;i<n;i++){
      cin >> arr[i];
   }

   ll total=0;
   k--;
   int rand=1;
   while(1){
      if(rand==1) rand--;
      if(k-rand<0 && k>=n) break;
      if(arr[k-rand]==arr[k] && (k-rand)>=0 && (k)<n){
         (k-rand==k)  ?  total+=arr[k-rand]:total+=arr[k-rand]*2;
      }
      else{
         if(k-rand>=0 && k>=n){
            total+=arr[k-rand];
         }
         else if(k-rand<0 && k<n){
            total+=arr[k];
         }
      }
      k++;
      rand+=2;
   }

   cout << total << '\n';
}
/* 



*/