#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <numeric>

#define ll long long

using namespace std;


int main(){	
	ios_base::sync_with_stdio(0);
	ll n,cnt,xx=0;
	cin >> n >> cnt;

	int arr[n+10];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int j;
	for(j=n-1;j>=0;j--){
		xx+=arr[j];
		if(xx>cnt)
			break;
	}

	cout << n-j << endl;
}
/*
9890123456789012345

*/
