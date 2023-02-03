#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   string s[10];
   while(q--){
      for(int i=0;i<9;i++){
         cin >> s[i];
      }
      s[0][0]=s[0][1];
      s[1][3]=s[1][4];
      s[2][6]=s[2][7];
      s[3][1]=s[3][2];
      s[4][4]=s[4][5];
      s[5][7]=s[5][8];
      s[6][2]=s[6][1];
      s[7][5]=s[7][6];
      s[8][8]=s[8][7];
      for(int i=0;i<9;i++){
         cout << s[i] << '\n';
      }
   }
} 
/*


*/
