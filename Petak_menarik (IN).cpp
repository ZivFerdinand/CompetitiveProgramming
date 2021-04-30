#include <bits/stdc++.h> 
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n,m,k;
   int arr[n+10][m+10];
   cin >> n >> m >> k;

   int ans_i,ans_j;
   ans_i=ans_j=0;
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
         cin >> arr[i][j];

   bool found=false;
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         int sum=1;
         if(i+1<m)
            sum*=arr[j][i+1];
         if(i-1>=0)
            sum*=arr[j][i-1];
         if(j+1<n)
            sum*=arr[j+1][i];
         if(j-1>=0)
            sum*=arr[j-1][i];

         if(sum==k){
            ans_i=j+1;
            ans_j=i+1;
            found=true;
            break;
         }
      }
      if(found)
         break;
   }

   cout << ans_i << ' ' << ans_j << '\n';
} 
/*



*/
