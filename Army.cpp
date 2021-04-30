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

   int d[500];
   for(int i=2;i<=n;i++){
      cin >> d[i];
   }
   int a,b;
   cin >> a >> b;

   ll total=0;
   for(int i=a+1;i<=b;i++){
      total+=d[i];
   }
   cout << total << '\n';
}
/*



*/