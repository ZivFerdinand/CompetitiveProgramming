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
#define ld long long double
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   int n,r;
   cin >> n >> r;

   int limit=n/r;
   if(n%r)  limit++;

   int last=1;
   for(int i=0;i<limit;i++){
      if(!(i%2)){
         int start=last;
         for(int j=start;j<start+r;j++){
            int      x=sqrt(j); 
            double   y=sqrt(j);
            string rand;
            (x==y) ? rand="X" : rand=to_string(j);
            cout << rand << ' ';
            last++;
         }
      }
      else{
         int start=min((last+r-1),n);
         int rand=start-1;
         for(int j=1;j<(r-(start-last));j++){
         	(rand/10==0) ? cout << "-  ":cout << "-- ";
            rand--;
         }

         for(int j=start;j>=last;j--){
            int x=sqrt(j); double y=sqrt(j);
            string rand;
            (x==y) ? rand="X" : rand=to_string(j);
            cout << rand << ' ';
         }
         last=start+1;
      }
      cout << '\n';
   }
}
/* 



*/
