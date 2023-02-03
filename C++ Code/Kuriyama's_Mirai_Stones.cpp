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

ll arr[200000],sorted[200000];

int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;

    for(int i=1;i<=n;i++){
    	cin >> arr[i];
    	sorted[i-1]=arr[i];
    }

    sort(sorted,sorted+n);

    arr[0]=0;
    for(int i=1;i<=n;i++){
    	arr[i]+=arr[i-1];
    	sorted[i]+=sorted[i-1];
    }

    int t,type,l,r;
    cin >> t;
    while(t--){
    	cin >> type >> l >> r;

    	(type==1)	?	cout << arr[r]-arr[l-1]:cout << sorted[r-1]-sorted[l-2];
    	cout << '\n';
    }
   
}