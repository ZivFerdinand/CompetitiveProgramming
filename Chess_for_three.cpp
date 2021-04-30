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

   int arr[n+10];
   int next=3;
   for(int i=0;i<n;i++){
      cin >> arr[i];
      if(arr[i]==next){
         cout << "NO\n";
         return 0;
      }
      for(int j=1;j<=3;j++){
         if(j!=arr[i] && j!=next){
            next=j;
            break;
         }
      }
   }
   cout << "YES\n";
}
/* 
1 2 3
3*2
2*1

*/