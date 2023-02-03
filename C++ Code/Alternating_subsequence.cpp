#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

ll arr[200010],total,maxx;
int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   int n;
   while(q--){
      cin >> n;
      total=0;
      maxx=-1*pow(10,9);
      for(int i=0;i<n;i++){
         cin >> arr[i];
         if(i){
            if((arr[i]>0 && arr[i-1]<0)||(arr[i]<0 && arr[i-1]>0)){
               total+=maxx;
               maxx=arr[i];
            }
            if(((arr[i]<0&&arr[i-1]<0)||(arr[i]>0&&arr[i-1]>0))&&i==n-1)
               total+=max(maxx,arr[i]);
            else if(i==n-1)
               total+=arr[i];
         }
         if(arr[i]>maxx)
            maxx=arr[i];
      }
      (n==1)?cout << arr[0] << '\n': cout << total << '\n';
   }
}