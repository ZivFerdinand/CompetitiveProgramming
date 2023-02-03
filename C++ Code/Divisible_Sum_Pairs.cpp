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
	int n,k;
	cin >> n >> k;

	int arr[n+10],x,cnt=0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(i==0){
			x=arr[i];
		}
		else{
			if((x+arr[i])%k==0){
				cnt++;
			}
		}
	}

	for(int i=1;i<n;i++){
		x=arr[i];
		for(int j=i+1;j<n;j++){
			if((x+arr[j])%k==0){
				cnt++;
			}
		}
	}

	cout << cnt << '\n';
}
