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
	ios_base::sync_with_stdio(0);
	int n,h;
	cin >> n >> h;

	int arr[n+10];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int j;
	sort(arr,arr+n);
	ll total=0;
	for(int i=n-1;i>=0;i--){
		if(arr[i]<=h){
			total+=arr[i];
			h-=total;
			j=i;	break;
		}
	}
	
	int limit=3000000;	int a;
	for(int i=j;i>=0;i--){
		if(arr[i]-h<limit && arr[i]-h>=0){
			limit=arr[i]-h;
			a=i;
		}
		if(arr[i]-h<0)	break;
	}
	
	cout << total+arr[a] << '\n';
}
