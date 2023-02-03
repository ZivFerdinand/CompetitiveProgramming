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
   ll t;
   cin >> n;    cin >> t;

   int x;
   ll i=1;
   ll total=0;
   while(n--){
      cin >> x;
      
      total+=86400-x;
      if(total>=t)      break;
      i++;
   }
   cout << i << '\n';
}
/* 


*/