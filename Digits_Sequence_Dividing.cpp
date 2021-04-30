#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int n;   string s;
   while(q--){
      cin >> n;
      cin >> s;

      if(n==2){
         if(s[1]<=s[0])
            cout << "NO\n";
         else
            cout << "YES\n2\n" << s[0] << ' ' << s[1] << '\n'; 
      }
      else{
         cout << "YES\n2\n";
         cout << s[0] << ' ';
         for(int i=1;i<n;i++)
            cout << s[i];
         cout << '\n';
      }
   }
} 
/*



*/
