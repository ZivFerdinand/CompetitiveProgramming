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
   string s;
   int a,b;
   a=b=0;
   for(int i=0;i<6;i++){
      cin >> s;
      (s[1]=='A')?a++:b++;
   }

   if(b>=3)
      cout << 100;
   else if(b>=2)
      cout << 70;
   else if(a>=1 && b>=2)
      cout << 50;
   else if(a>=1 && b>=1)
      cout << 40;
   else if(a>=2 && b>=1)
      cout << 25;
   else if(a>=3)
      cout << 20;
   else if(a>=2)
      cout << 10;
   else if(b>0)
      cout << 5;
   else
      cout << 2;
   cout << '\n';
}
/* 



*/
