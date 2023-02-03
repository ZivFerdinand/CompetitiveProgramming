#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int itung=0;
	int arr[n+10];

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=1;i<n-1;i++){
		if((arr[i]>arr[i+1] && arr[i]<arr[i-1]) || (arr[i]>arr[i-1] && arr[i]<arr[i+1])){
			itung++;
		}
	}
	cout << itung << endl;
}
