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

   ll s_len=s.size();
   cout << s;

   for(int i=s_len-1;i>=0;i--){
      cout << s[i];
   }
   cout << '\n';
}
/* 


*/