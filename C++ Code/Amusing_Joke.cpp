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
   int data[500]={};
   int check[500]={};
   int j=0;
   char arr[100];
   string a,b,s;
   cin >> a >> b >> s;

   for(int i=0;i<a.size();i++){
      if(data[(int)a[i]]==0)
         arr[j++]=a[i];
      data[(int)a[i]]++;
   }
   for(int i=0;i<b.size();i++){
      if(data[(int)b[i]]==0)
         arr[j++]=b[i];
      data[(int)b[i]]++;
   }

   for(int i=0;i<s.size();i++){
      check[(int)s[i]]++;
   }

   for(int i=0;i<j;i++)
      if(data[(int)arr[i]]!=check[(int)arr[i]] || s.size()!=a.size()+b.size()){
         cout << "NO\n";
         return 0;
      }
   cout << "YES\n";
}
/* 



*/