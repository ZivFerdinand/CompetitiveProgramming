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

   map<string,string> data;
   while(m--){
      string a,b;
      cin >> a >> b;

      string rand;
      if(a.size()<b.size()){
         rand=a;
      }
      else if(a.size()>b.size()){
         rand=b;
      }
      else{
         rand=a;
      }

      data[a]=rand;
      data[b]=rand;
   }

   string rand;
   while(n--){
      cin >> rand;
      cout << data[rand];

      (n==0) ? cout << '\n':cout << ' ';
   }
}
/* 


*/