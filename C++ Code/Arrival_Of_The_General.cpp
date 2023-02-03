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
   int max_limit=0,min_limit=200;
   int loc_max_limit,loc_min_limit;
   for(int i=0;i<n;i++){
      cin >> arr[i];
      if(arr[i]>max_limit){
         max_limit=arr[i];
         loc_max_limit=i;
      }
      if(arr[i]<=min_limit){
         min_limit=arr[i];
         loc_min_limit=i;
      }
   }

   if(loc_max_limit-loc_min_limit>0){
      cout << (loc_max_limit)+(n-1-loc_min_limit)-1 << '\n';
   }
   else{
      cout << (loc_max_limit)+(n-1-loc_min_limit) << '\n';
   }
}
/*

7
10 10 58 31 63 40 76

76 

10 10 58 31 63 76



*/