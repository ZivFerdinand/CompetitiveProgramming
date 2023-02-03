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
   	int q;
   	cin >> q;

   	int n;	ll k;
   	ll lower,upper;
   	ll rand;
   	while(q--){
   		cin >> n >> k;
   		for(int i=0;i<n;i++){
   			cin >> rand;

   			if(i==0)	lower=upper=rand;
   			if(rand>upper)	upper=rand;
   			if(rand<lower)	lower=rand;
   		}
         (upper>lower+k+k)?  cout << -1:cout << lower+k;
         cout << '\n';
   	}
}