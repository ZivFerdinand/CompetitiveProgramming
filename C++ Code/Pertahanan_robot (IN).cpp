#include <iostream> 
#include <algorithm> 
#include <cmath> 
#include <string> 
#include <cstring> 
#include <iomanip> 
#include <map> 
#include <cstdio> 
#include <sstream> 
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   string s;
   cin >> s;

   int s_len=s.size(),x=0,y=0;
   for(int i=0;i<s_len;i++){
      if(s[i]=='R')        x++;
      else if(s[i]=='L')   x--;
      else if(s[i]=='U')   y++;
      else if(s[i]=='D')   y--;
   }

   cout << x << ' ' << y << '\n';
} 
/*  



*/
