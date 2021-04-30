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
   string s;
   cin >> s;

   int s_len=s.size();
   for(int i=0;i<s_len;i++){
      if(s[i]=='-' && s[i+1]=='.'){
         cout << 1;
         i++;
      }
      else if(s[i]=='-' && s[i+1]=='-'){
         cout << 2;
         i++;
      }
      else  cout << 0;
   }
}
/*



*/