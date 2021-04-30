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
	ll n;
	cin >> n;
 
	ll j=n-1;
	ll me=1,friends=1000000;
	ll arr[100010];
    bool done=false;
	for(ll i=0;i<n;i++){
		cin >> arr[i];
		if(abs(arr[i]-me)>abs(arr[i]-friends) && done==false){
			j=i;
            done=true;
		}
	}
 
	ll cnt_friend=0,cnt_me=0;
 	ll limit=n;
 
	for(ll i=n-1;i>=j;i--){
		if(abs(me-arr[i])<abs(friends-arr[i])){
			break;
		}
		else{
			cnt_friend+=abs(friends-arr[i]);
			friends=arr[i];
		}
		limit=i;
	}
	for(ll i=0;i<limit;i++){
		cnt_me+=abs(me-arr[i]);
		me=arr[i];
	}
	cout << max(cnt_me,cnt_friend) << '\n';
}