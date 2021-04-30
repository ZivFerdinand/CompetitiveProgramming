#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long arr[n+10];
	long long arr2[n+10];

	for(int i=1;i<=n;i++){
		cin >> arr[i];

		arr2[arr[i]]=i;
	}

	for(int i=1;i<=n;i++){
		if(i<n){
			cout << arr2[i] << ' ';
		}
		else{
			cout << arr2[i] << '\n';
		}
	}
}