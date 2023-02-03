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

      bool prime=false;
      while(!prime){
         int cnt=0;
         for(ll i=1;i<=n;i++){
            if(i*i>n)      break;
            if(n%i==0){
               cnt++;
            }
         }
         if(n!=1 && cnt<=1){
            prime=true;
            cout << n << ent;
         }
         n++;
      }
}
/*


*/