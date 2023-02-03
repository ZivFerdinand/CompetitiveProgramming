#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
 
int main(){
   	ios_base::sync_with_stdio(false);
   	ll q;
   	cin >> q;
 
   	ll n,x;
   	while(q--){
   		cin >> n;
 		
 		bool found=0;
   		ll left,right;
   		ll maximum=0,minimum;
   		ll arr[n+10];
   		for(int i=0;i<n;i++){
   			cin >> arr[i];
   		}

   		for(int i=0;i<n-1;i++){
   			if(abs(arr[i]-arr[i+1])>1){
   				cout << "YES\n";
   				cout << i+1 << ' ' << i+2 << '\n';
   				found=1;
   				break;
   			}
   		}

   		if(!found)		cout << "NO\n";
   	}
}	 