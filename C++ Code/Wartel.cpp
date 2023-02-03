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
   int n,q;
   cin >> n >> q;

   string name,number;
   map<string,string> data;
   map<string,bool> available;
   while(n--){
      cin >> name >> number;
      data[name]=number;
      available[name]=true;
   }
   while(q--){
      cin >> name;

      if(available[name]==true)  cout << data[name]<< '\n';
      else                       cout << "NIHIL\n";
   }
}
/* 


*/