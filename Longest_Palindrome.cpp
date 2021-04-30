#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n,len;
   cin >> n >> len;

   int first_len=len;
   string data[n+10];
   string pal;
   string data2[n+10];
   int cnt=0;
   bool found_pal=false,palindrome=true;
   string s[n+10];
   for(int i=0;i<n;i++){
      cin >> s[i];

      palindrome=true;
      if(!found_pal)
         for(int j=0;j<len;j++)
            if(s[i][j]!=s[i][len-j-1]){
               palindrome=false;
               break;
            }
      if(palindrome && !found_pal){
         pal=s[i];
         found_pal=true;
      }
      if(i>0){
         for(int j=0;j<i;j++){
            bool cont=true;
            for(int k=0;k<len;k++){
               if(s[j][k]!=s[i][len-k-1]){
                  cont=false;
                  break;
               }
            }
            if(cont){
               data2[cnt]=s[j];
               data[cnt++]=s[i];
               break;
            }
         }
      }
   }


   len=(cnt*len)*2;
   if(found_pal)  len+=first_len;
   cout << len << '\n';
   for(int i=0;i<cnt;i++)
      cout << data2[i];
   
   if(found_pal)  cout << pal;
   for(int i=cnt-1;i>=0;i--)
      cout << data[i];
} 
/*


dcbaijjiabcd

*/