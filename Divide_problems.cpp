#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;


	long long arr[n+10];


	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	sort(arr,arr+n);

	cout << abs(arr[n/2-1]-arr[n/2])<< endl;
}
