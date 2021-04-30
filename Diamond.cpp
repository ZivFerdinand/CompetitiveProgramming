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

   if(n%2==0)  n++;
   int star=1;
   for(int i=0;i<n;i++){
      string space;
      for(int j=0;j<((n-star)/2);j++){
         cout << ' ';
         space+=' ';
      }
      for(int j=0;j<star;j++)
         cout << '*';
      cout << space << '\n';

      if(i<n/2)   star+=2;
      else        star-=2;
   }


}
/* 


*/