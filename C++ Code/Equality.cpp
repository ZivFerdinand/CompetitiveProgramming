#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n,k;
   cin >> n >> k;

   string s;
   cin >> s;

   int cnt[100]={},mins=n+10;
   for(int i=0;i<n;i++){
      cnt[(int)s[i]]++;
   }
   for(int i=65;i<65+k;i++)
      mins=min(mins,cnt[i]);
   

   cout << mins*k << '\n';   
}
/*


*/
