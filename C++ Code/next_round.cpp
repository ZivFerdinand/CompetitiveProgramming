#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;

	int arr[n+20];
	int a;
	int itung=0;

	for(int i=1;i<=n;i++){
		cin >> arr[i];
		if(arr[i]>0 && i<=k){
			itung++;
		}
	}
	for(int i=k+1;i<=n;i++){
		if(arr[i]==arr[k] && arr[i]>0){
			itung++;
		}
		else{
			break;
		}
	}

	cout << itung << endl;

}
