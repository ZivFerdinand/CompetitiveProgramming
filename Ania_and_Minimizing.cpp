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
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   int n,k;
   cin >> n >> k;

   string s;
   cin >> s;
   int s_len=s.size();

   int cnt=0;
   for(int i=0;i<n;i++){
      if(cnt>=k)  break;
      if(n==1 && s[i]!='0'){
         s[i]='0';
         cnt++; 
         break; 
      }
      else if(n==1 && s[i]=='0') break;
      else if(s[i]!='1' && i==0){
         s[i]='1';
         cnt++;
      }
      else if(s[i]!='0' && i>0){
         s[i]='0';
         cnt++;
      }
   }
   cout << s << '\n';
}
/* 



*/