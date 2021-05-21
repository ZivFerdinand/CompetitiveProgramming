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
   int n;
   cin >> n;

   ll x,y;
   ll max_limit=0;
   while(n--){
      cin >> x >> y;
      max_limit=max(max_limit,x+y);
   }

   cout << max_limit << '\n';
}
/*

NO COMMENT

*/
