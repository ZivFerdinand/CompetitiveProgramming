#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int total=0;
   for(int i=1;i<=4;i++){
      total+=(i*i)-(2*i)-8;
   }
   cout << total;
}