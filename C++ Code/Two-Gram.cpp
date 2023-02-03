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

   map<string,int> data;
   string s;
   cin >> s;

   int max_limit=0;
   char last,last_2;
   for(int i=0;i<n-1;i++){
      string rand;
      rand.clear();
      rand+=s[i];
      rand+=s[i+1];
      data[rand]++;
      if(data[rand]>max_limit){
         max_limit=data[rand];
         last=s[i];
         last_2=s[i+1];
      }
   }

   cout << last << last_2 << '\n';
}
/* 



*/