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
   ll arr[5],d;
   ll total=0;

   for(int i=0;i<4;i++){
      cin >> arr[i];
   }
   
   cin >> d;
   int cnt=0;
   for(int i=1;i<=d;i++){
      for(int j=0;j<4;j++){
         if(i%arr[j]==0){
            cnt++;
            break;
         }
      }
   }
   cout << cnt << '\n';
}
/*
4 x 3 x 2
---
3!

2 3 4 5
24
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24

12 8 6 4 = 30

-4 -2 -1 -3 -2 -1 

*/