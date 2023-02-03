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
   int n;
   cin >> n;

   int arr[n+10];
   for(int i=0;i<n;i++){
      cin >> arr[i];
   }
   sort(arr,arr+n);
   cout << min(arr[n-2]-arr[0],arr[n-1]-arr[1]) << '\n';
}
/* 



*/