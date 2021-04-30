#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int arr[n+10];

	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}

	if(n==1){
		cout << 1 << endl;
	}
	else if(n==2){
		cout << 12 << endl << 21 << endl;
	}
	else{
		while(next_permutation(arr,arr+n)){
			bool salah=false;

			for(int i=1;i<n-1;i++){
				if(arr[i]>arr[i-1] && arr[i]>arr[i+1] || arr[i]<arr[i-1] && arr[i]<arr[i+1]){

				}	
				else{
					salah=true;
					break;
				}
			}

			if(!salah){
				for(int i=0;i<n;i++){
					if(i<n-1){
						cout << arr[i];
					}
					else{
						cout << arr[i] << '\n';
					}
				}
			}
		}
	}
}
