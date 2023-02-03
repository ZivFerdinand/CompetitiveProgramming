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
bool exist[1005];

int main(){
    ios_base::sync_with_stdio(false);
	int t;
	cin >> t;

	ll n;
	while(t--){
		cin >> n;

		memset(exist,0,sizeof exist);
		ll arr[n+10];
		ll arr2[1000],ii=0,cnt=0,x;
		memset(arr,0,sizeof arr);
		for(int i=0;i<n;i++){
			cin >> x;
			if(!exist[x]){
				exist[x]=true;
				arr2[ii]=x;
				ii++;
			}
			arr[x]++;
		}
		bool cont=1;
		for(int i=0;i<ii;i++){
			if(arr2[i]==1){
				cnt+=arr[1];
			}
			else{
				if(arr[arr2[i]]%arr2[i]==0){
					cnt+=arr[arr2[i]]/arr2[i];
				}
				else{
					cont=0;
					cout << "Invalid Data\n";
					break;
				}
			}
		}

		if(cont) cout << cnt << '\n';
	}    
}
