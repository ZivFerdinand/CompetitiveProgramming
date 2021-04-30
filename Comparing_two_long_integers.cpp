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
      string a,b;
      cin >> a >> b;

      ll i=0,j=0;
      ll a_len=a.size(),b_len=b.size();
      while(a[i]=='0')  i++;
      while(b[j]=='0')  j++;

      a.erase(0,i);  b.erase(0,j);

      a_len=a.size();b_len=b.size();
      if(a_len>b_len){
         cout << ">\n";
      }
      else if(a_len<b_len){
         cout << "<\n";
      }
      else{
         if(a>b){
            cout << ">\n";
         }
         else if(a<b){
            cout << "<\n";
         }
         else{
            cout << "=\n";
         }
      }
}