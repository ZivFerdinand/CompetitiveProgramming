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
   int num,n; 
   cin >> num;
   while(num--){
      cin >> n;
      if(n%2){
         cout<<"7";
         n-=3;
      }
      while(n){
         cout << "1";
         n-=2;
      }

      cout << '\n';
   }
   
} 
/*
1 -> 2
7 -> 3
4 -> 4
5 -> 5
9 -> 6


*/
