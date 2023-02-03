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
   cout << "Acceptable : '*','/','+','-','%'\n";
   ll x;
   cin >> x;

   char c;
   cin >> c;

   ll y;
   cin >> y;
   
   switch(c){
      case '/':
         cout << x/y;
         break;
      case '*':
         cout << x*y;
         break;
      case '+':
         cout << x+y;
         break;
      case '-':
         cout << x-y;
         break;
      default:
         cout << x%y;
         break;
   }
   cout << '\n';
}
/* 



*/