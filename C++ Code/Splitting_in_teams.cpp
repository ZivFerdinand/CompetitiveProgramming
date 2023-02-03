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
   ll n;
   cin >> n;

   int x;
   ll one=0,two=0;
   while(n--){
      cin >> x;

      (x==1) ? one++:two++;
   }

   ll total=min(one,two);
   one-=total; two-=total;

   total+=(one/3);
   cout << total << '\n';
}
/* 


*/