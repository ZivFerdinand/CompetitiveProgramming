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
   string s;
   cin >> s;

   int s_len=s.size();
   int cnt=0,rand;

   if(s_len%2==0) rand=s_len/2;
   else{         
      rand=(s_len/2)+1;
   }

   for(int i=0;i<rand;i++){
      if(s[i]!=s[s_len-i-1])  cnt++;
   }
   cout << cnt << ent;
}
/*



*/