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
   	int n;
      cin >> n;

      int x;
      int pos=0,neg=0;
      while(n--){
         cin >> x;

         (x>0) ? pos+=x:neg+=x;
      }
      cout << pos-neg << ent;
}
/*


*/