#include <iostream>
using namespace std;
int main(){
	int n,loncat=0;
	cin >> n;

	int arr[n+10];

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		if(i==n-2){
			loncat+=1;
			break;
		}
		else if(i==n-3 && arr[i+2]==0){
			loncat+=1;
			break;
		}
		else if(arr[i+2]==0){
			i+=1;
			loncat+=1;
		}
		else if(arr[i+2]==1){
			loncat+=1;
		}
	}

	cout << loncat << endl;
}
