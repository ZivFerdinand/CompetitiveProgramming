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
   int n,m;
   cin >> n >> m;

   int day=1;
   while(n>0){
      n--;
      if(!(day%m))
         n++;
      day++;
   }
   cout << day-1 << '\n';
} 
/*

*/
