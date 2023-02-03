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
#define ld long long double
using namespace std;
   int available=0;
   int searched,n,m,b,k;
   int arr[50][50];
   bool visited[50][50]={};
   int check(int b,int k){
   if(arr[b][k]==searched && (b<n && k<m)){
      if(visited[b][k]==false){
         visited[b][k]=true;
         available++;
         check(b+1,k);
         check(b-1,k);
         check(b,k+1);
         check(b,k-1);
      }
   }
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);   cout.tie(NULL);
   cin >> n >> m;

   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
         cin >> arr[i][j];

   cin >> b >> k;
   searched=arr[b][k];
   check(b,k);
   ll total_score=available*(available-1);
   cout << total_score << '\n';
}
/* 



*/