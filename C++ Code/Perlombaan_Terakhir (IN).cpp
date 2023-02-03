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
   string s;
   cin >> s;

   int o=0;
   int s_len=s.size();
   for(int i=0;i<s_len;i++){
      if(s[i]=='O')  o++;
   }

   (o==1) ? cout << "Ya\n":cout << "Tidak\n";
}
/* 
6 4
1 2 3 4 5 6


*/