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
   cin >> n;
   cin >> m;

   map<string,string> data;
   string name,ip;
   while(n--){
      cin >> name >> ip;
      data[ip]="#"+name;
   }
   while(m--){
      cin >> name >> ip;
      int ip_len=ip.size();
      string rand=ip;
      rand.erase(ip_len-1,1);

      cout << name << ' ' << ip << ' ' << data[rand] << '\n';
   }
}
/*



*/