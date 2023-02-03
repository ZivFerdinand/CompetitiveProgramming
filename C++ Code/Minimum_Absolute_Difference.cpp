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
    int n;
    cin >> n;

    ll arr[n+10];
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    }

    sort(arr,arr+n);

    ll minimum=1000000000;
    for(int i=1;i<n-1;i++){
    	if(abs(arr[i]-arr[i+1])<minimum){
    		minimum=abs(arr[i]-arr[i+1]);
    	}
    	if(abs(arr[i]-arr[i-1])<minimum){
    		minimum=abs(arr[i]-arr[i-1]);
    	}

    	if(minimum==0)break;
    }

    cout << minimum << '\n';
}
