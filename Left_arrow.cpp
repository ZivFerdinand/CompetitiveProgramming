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
   int n;
   cin >> n;

   int mid=1;
   if(n%2==0)  n++;
   for(int i=0;i<n;i++){
      for(int j=0;j<(n/2)+1-mid;j++)
         cout << ' ';
      for(int j=0;j<mid;j++)
         (i==(n/2))  ?  cout << "**":cout << '*';

      cout << '\n';
      if(i<(n/2))   mid++;
      else          mid--;
   }
}
/* 
5
  *
 **
********
 **
  *

*/