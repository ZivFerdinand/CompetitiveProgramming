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
   cin.tie(NULL);   cout.tie(NULL);
   int n,m;
   cin >> n >> m;

   bool Akshat=false,Malvika=true;
   while(n-- && m--){
      swap(Akshat,Malvika);
   }

   if(Malvika) cout << "Malvika\n";
   else        cout << "Akshat\n";
}
/* 



*/