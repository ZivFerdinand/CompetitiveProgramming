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
#define ld long long double
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   int n;
   cin >> n;
   cin >> n;

   int original=n,i=0;
   char s,max_char='1';
   while(n--){
      if(original==1) break;
      cin >> s;
      if(i==0) max_char=s;
      if(i>0){
         if(max_char>s || i==original-1)
            break;
         else if(s>max_char)
            max_char=s;
      }
      cin >> s;
      i++;
   }
   cout << i+1 << '\n';
}
/* 



*/