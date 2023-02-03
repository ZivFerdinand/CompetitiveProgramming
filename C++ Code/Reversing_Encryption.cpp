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
   int n;
   cin >> n;

   string s;   cin >> s;

   int arr[n+10];
   int j=0;
   for(int i=1;i<=n;i++){
      if(n%i==0){
         arr[j++]=i;      
      }
   }
   for(int i=0;i<j;i++){
      int rand=arr[i]-1;
      string s_new;
      s_new.clear();
      for(int k=0;k<=rand;k++){
         s_new+=s[k];
      }
      int lol=0;
      for(int k=rand;k>=0;k--){
         s[k]=s_new[lol++];
      }
   }
   cout << s << '\n';
}
/*
codefsecor
0 1 2 3

edoc
cdoe
code
*/