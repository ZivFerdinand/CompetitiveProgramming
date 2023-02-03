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

	int arr[n+10];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	ll sereja=0,dima=0;
	int j=n-1,i=0;
	int cnt=n/2;

	if(n%2){
		cnt++;
	}

	while(cnt--){
		if(arr[i]>arr[j]){
			sereja+=arr[i];
			i++;
		}
		else{
			sereja+=arr[j];
			j--;
		}
		if(n%2 && cnt==0){
			break;
		}
		if(arr[i]>arr[j]){
			dima+=arr[i];
			i++;
		}
		else{
			dima+=arr[j];
			j--;
		}
	}
	cout << sereja << ' ' << dima << '\n';
}
