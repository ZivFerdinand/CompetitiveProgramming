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
   int q;
   cin >> q;

   int n;
   while(q--){
      cin >> n;
      string s;
      cin >> s;

      int total=0;
      int max_limit=0;
      bool found_a=false;
      for(int i=0;i<n;i++){
         if(s[i]=='A'){
            total=0;
            found_a=1;
         }
         else if(s[i]=='P' && found_a){
            total++;
         }

         if(total>max_limit)  max_limit=total;
      }
      cout << max_limit << '\n';
   }
}
/*



*/