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
   	int n,m;
      cin >> n >> m;

      ll x;
      int odd_n,even_n,odd_m,even_m;
      odd_n=odd_m=even_n=even_m=0;
      while(n--){
         cin >> x;

         (x%2==0)?even_n++:odd_n++;
      }
      while(m--){
         cin >> x;

         (x%2==0)?even_m++:odd_m++;
      }

      cout << min(odd_m,even_n)+min(even_m,odd_n) << ent;

}
/*


*/