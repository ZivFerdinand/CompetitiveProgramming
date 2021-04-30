#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   ll n,total,pow;
   while(q--){
      cin >> n;
      total=3;
      pow=2;

      while(n%total){
         pow*=2;
         total+=pow;
      }

      cout << n/total << '\n';
   }
}