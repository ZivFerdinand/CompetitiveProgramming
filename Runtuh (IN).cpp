#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n,len,greatest=0;
   cin >> n >> len;

   string data[50];
   for(int i=0;i<n;i++)
      cin >> data[i];
   bool available=true;
   while(available){
      available=false;
      greatest=0;
      for(int i=0;i<n;i++){
         bool check=true;
         for(int j=0;j<len;j++){
            if(data[i][j]!='1'){
               check=false;
               break;
            }
         }
         if(check){
            available=true;
            greatest=i;
            for(int j=0;j<len;j++)
               data[i][j]='0';      
         }
      }
      int cnt,lowest;
      for(int i=0;i<len;i++){
         cnt=0,lowest=n;
         for(int j=greatest;j>=0;j--){
            if(data[j][i]=='1')
               cnt++;
         }
         for(int j=n-1;j>=greatest;j--){
            if(data[j][i]=='1')
               lowest=j;
         }
         for(int j=lowest-1;j>=0;j--){
            if(j>lowest-cnt-1)
               data[j][i]='1';
            else
               data[j][i]='0';
         }
      }
   }

   for(int i=0;i<n;i++)
      cout << data[i] << '\n';
} 
/*



*/
