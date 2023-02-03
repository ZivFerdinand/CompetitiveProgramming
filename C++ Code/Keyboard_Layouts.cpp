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
   	string a,b,s;
      cin >> a >> b >> s;

      int arr[300];
      int s_len=s.size();
      for(int i=0;i<26;i++){
         arr[(int)a[i]]=(int)b[i];
      }

      for(int i=0;i<s_len;i++){
         if(((int)s[i])<97 && ((int)s[i])>=65){
            int rand=arr[((int)s[i])+32];
            cout << char(rand-32);
         }
         else if((int)s[i]>=97){
            cout << char(arr[(int)s[i]]);
         }
         else{
            cout << s[i];
         }
      }
      cout << ent;
}
/*


*/