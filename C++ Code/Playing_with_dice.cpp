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
   int a,b;
   cin >> a >> b;

   int one=0,two=0,same=0;
   for(int i=1;i<=6;i++){
      if(abs(i-a)>abs(i-b)){
         two++;
      }
      else if(abs(i-a)<abs(i-b)){
         one++;
      }
      else{
         same++;
      }
   }
   cout << one << ' ' << same << ' ' << two << '\n';
}	 