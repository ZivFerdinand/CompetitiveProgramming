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
// ver..(1.1)
string ent="\n";
string space=" ";
int main(){
   ios_base::sync_with_stdio(false);
   int n;
   cin >> n;

   int x;
   int cnt=0;
   int is_being_searched=1;
   for(int i=1;i<=n;i++){
      cin >> x;
      if(x==is_being_searched){
         cnt++;
         is_being_searched++;
      }
   }

   (cnt!=0)? cout << (n-cnt):cout << (-1);
   cout << ent;
}
/*
5 25

kpk=25
fpb=5

3 21

kpk=21
fpb=3

*/