#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int counter[200010],note[200010];
bool available[200010];
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;
   
   int n,x,most,diff,cnt;
   while(q--){
      cin >> n;

      most=diff=cnt=0;
      memset(counter,0,sizeof counter);
      memset(available,0,sizeof available);
      for(int i=0;i<n;i++){
         cin >> x;
         if(!available[x]){
            available[x]=true;
            cnt++;
         }
         counter[x]++;
         most=max(most,counter[x]);
      }
      diff=cnt-1;
      if(n==1) cout << 0 << '\n';
      else     cout << max(min(diff,most),min(most-1,diff+1)) << '\n';
   }
}
/*


*/
