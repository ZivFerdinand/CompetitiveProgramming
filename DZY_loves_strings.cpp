#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   string s;
   cin >> s;

   double k,x;
   double s_len=s.size(),highest=0;
   cin >> k;

   double arr[50];
   for(int i=1;i<=26;i++){
      cin >> arr[i];
      highest=max(highest,arr[i]);
   }
   
   ll total=0;
   for(int i=0;i<s_len;i++)
      total+=(i+1)*arr[((int)s[i])-96];
      // huruf ke-n = (int)s[i]-96;
   // a=s_len+1, b=1, n=k;

   x=(k/2)*(s_len+1+s_len+k)*highest;
   ll rand=x;
   cout << total+rand << '\n';
} 
/*


*/
