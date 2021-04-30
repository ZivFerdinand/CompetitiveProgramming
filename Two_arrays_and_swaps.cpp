#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q,n,k,from_a,from_b,total;
   cin >> q;

   int a[50],b[50];
   while(q--){
      cin >> n >> k;
      from_a=total=0; from_b=n-1;
      for(int i=0;i<n;i++)
         cin >> a[i];
      for(int i=0;i<n;i++)
         cin >> b[i];

      sort(a,a+n);   sort(b,b+n);

      while(k--){
         if(b[from_b]>a[from_a]){
            swap(b[from_b--],a[from_a++]);
            continue;
         }
         break;
      }
      for(int i=0;i<n;i++)
         total+=a[i];
      cout << total << '\n';
   }
}