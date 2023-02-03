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
   int n,m;
   cin >> n >> m;

   string a[n+10],b[m+10];
   for(int i=1;i<n;i++){
      cin >> a[i];
   }
   cin >> a[0];
   for(int i=1;i<m;i++){
      cin >> b[i];
   }
   cin >> b[0];

   int q;
   cin >> q;
   ll x;
   while(q--){
      cin >> x;

      cout << a[x%n]+b[x%m] << '\n';
   }
}
/*



*/