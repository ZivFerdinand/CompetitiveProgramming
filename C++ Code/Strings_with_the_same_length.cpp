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
   string s,t;

   cin >> n >> s >> t;
   for(int i=0;i<n;i++){
      cout << s[i] << t[i];
   }   
   cout << ent;
}
/*


*/