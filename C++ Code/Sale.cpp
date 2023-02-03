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
   int n,m;
   cin >> n >> m;

   int arr[n+10];
   for(int i=0;i<n;i++){
      cin >> arr[i];
   }
   sort(arr,arr+n);
   ll total=0;
   for(int i=0;i<m;i++){
      if(arr[i]>0)   break;
      total+=arr[i];
   }

   cout << abs(total) << '\n';
}
/* 


*/