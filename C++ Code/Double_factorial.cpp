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
// ver..(1.1)
string ent="\n";
string space=" ";
int main(){
   ios_base::sync_with_stdio(false);
   ll n;
   cin >> n;

   if(n%2==1)  cout << 0 << ent;
   else{
      n/=2;

      ll total=0;
      ll divisor=5;
      while(divisor<=n){
         total+=n/divisor;
         divisor*=5;
      }
      cout << total << ent;
   }
}
/*
f(2)  = 1 * (2^1)
f(4)  = 2 * 1 * (2^2)
f(6)  = 3 * 2 * 1 * (2^3)
f(8)  = 4 * 3 * 2 * 1 * (2^4)
f(10) = 5 * 4 * 3 * 2 * 1 * (2^5)
.
.
.
*/