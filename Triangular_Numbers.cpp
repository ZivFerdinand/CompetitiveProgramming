#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n,cnt=1;
   	cin >> n;

   	while(true){
   		if((cnt*(cnt+1))/2==n){
   			cout << "YES\n";
   			break;
   		}
   		if((cnt*(cnt+1))/2>n){
   			cout << "NO\n";
   			break;
   		}
   		cnt++;
   	}
}
/*



*/