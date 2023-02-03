#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
int datas[10010];
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n,t,s_len,k;
   string s;
   cin >> t;

   while(t--){
      cin >> n;
      s=to_string(n);
      s_len=s.size();
      k=0;

      for(int i=0;i<s_len;i++)
         if(s[i]!=48){
            k++;
            int rand=1;
            for(int j=0;j<s_len-i-1;j++)
               rand*=10;
            datas[k-1]=((int(s[i]))-48)*rand;
         }

      cout << k << '\n';
      for(int i=0;i<k;i++)
         (i<k-1) ? cout << datas[i] << ' ' : cout << datas[i] << '\n';
   }
}
/*



*/
