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

int min_limit=500000,smallest=500000;
int main(){
   ios_base::sync_with_stdio(false);
   int n,x;
   cin >> n >> x;

   int rand;
   while(n--){
      cin >> rand;

      if(abs(rand-x)<min_limit){
         min_limit=abs(rand-x);
         smallest=rand;  
      }
      else if(abs(rand-x)==min_limit){
         if(rand<smallest){
            smallest=rand;
         }
      }
   }

   cout << smallest << '\n';
}
/* 


*/