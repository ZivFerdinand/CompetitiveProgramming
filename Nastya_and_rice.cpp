#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int a,b,c,d,n,range_a,range_b,range_c,range_d;
   while(q--){
      cin >> n >> a >> b >> c >> d;
      range_a=a-b;
      range_b=a+b;
      range_c=c-d;
      range_d=c+d;
      bool cont=true;
      for(int i=range_c;i<=range_d;i++){
         if(i/n>=range_a && i/n<=range_b){
            if(i%n && i/n==range_b)
               continue;
            else{
               cout << "Yes\n";
               cont=false;
               break;
            }
         }
      }
      if(cont)
         cout << "No\n";
   }
}