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
      
      ll arr[100010];
int main(){
   	ios_base::sync_with_stdio(false);
      bool arr[5]={};
      int n;
      cin >> n;
      arr[n]=true;
      cin >> n;
      arr[n]=true;

      for(int i=1;i<=3;i++){
         if(!arr[i]) cout << i << '\n';
      }

}
/*


*/