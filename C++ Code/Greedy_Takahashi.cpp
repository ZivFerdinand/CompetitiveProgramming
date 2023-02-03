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
      ll a,b,k;
      cin >> a >> b >> k;

      ll rand=min(a,k);
      a-=rand;    k-=rand;

      rand=min(b,k);
      b-=rand;

      cout << a << space << b << ent;
}
/*


*/