#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   string s;
   cin >> s;

   string rand;
   for(int i=1;i<s.size();i++)
      rand+=s[i];

   ll a=stoi(rand);
   if(a%2)
      cout << 1 << '\n';
   else
      cout << 0 << '\n';
} 
/*



*/
