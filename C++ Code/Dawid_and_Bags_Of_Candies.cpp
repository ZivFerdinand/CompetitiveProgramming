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
    int n=4;

    int arr[n+10];
    ll total=0;
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    	total+=arr[i];
    }

    sort(arr,arr+n);
    
    if(arr[3]==total-arr[3]){
    	cout << "YES\n";
    	return 0;
    }
    else if(arr[0]+arr[3]==arr[1]+arr[2]){
    	cout << "YES\n";
    	return 0;
    }
    cout << "NO\n";
}