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
   int q;
   cin >> q;

   string s;
   while(q--){
      cin >> s;
      int s_len=s.size();

      int n=s_len;
      if(s_len%2==0) s_len=s_len/2;
      else           s_len=(s_len/2)-1;

      int note[n+10];
      bool palindrome=true;
      int cnt=0;
      bool available[97+26]={};
      for(int i=0;i<n;i++){
         if(!available[(int)s[i]]){
            note[cnt++]=i;
            available[(int)s[i]]=true;
         }
         if(i<=s_len && s[i]!=s[n-1-i]){
            palindrome=false;
         }
      }
      
      if(!palindrome)   cout << s << '\n';
      else{
         if(cnt>1){
            swap(s[note[0]],s[note[1]]);
            cout << s << '\n';
         }
         else  cout << -1 << '\n';
      }
   }
}
/*
0 1 2

abacaba
iaai -> iaia
aaaaaaa
sayas
sasay
*/