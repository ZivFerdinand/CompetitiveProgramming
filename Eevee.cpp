#include <iostream> 
#include <algorithm> 
#include <cmath> 
#include <string> 
#include <cstring> 
#include <iomanip> 
#include <map> 
#include <cstdio> 
#include <sstream> 
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int n;
   cin >> n;
   string s[10];
   s[0]="vaporeon\n";
   s[1]="espeon\n";
   s[2]="jolteon\n";
   s[3]="flareon\n";
   s[4]="umbreon\n";
   s[5]="leafeon\n";
   s[6]="glaceon\n";
   s[7]="sylveon\n";

   string rand;
   cin >> rand;
   if(n==8)
      cout << s[0];
   else if(n==6)
      cout << s[1];
   else{
      bool check[10]={};
      for(int i=0;i<7;i++){
         if(rand[i]!='.'){
            check[i]=true;
         }
      }
      for(int i=2;i<8;i++){
         bool found=1;
         for(int j=0;j<7;j++){
            if(check[j]){
               if(s[i][j]!=rand[j])
                  found=0;
            }
         }
         if(found){
            cout << s[i];
            break;
         }
      }
   }
} 
/*  
 
NO COMMENT
 
*/
