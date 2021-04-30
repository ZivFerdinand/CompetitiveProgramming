#include <iostream>
using namespace std;
int main(){
	long long arr[4];

	long long min=0;
	int catat;

	for(int i=0;i<4;i++){
		cin >> arr[i];
		if(arr[i]>min){
			min=arr[i];
			catat=i;
		}
	}
	for(int i=3;i>=0;i--){
		if(catat==i){
			continue;
		}
		else{
			if(i>0){
				cout << arr[catat]-arr[i] << ' ';
			}
			else{
				cout << arr[catat]-arr[i] << endl;
			}
		}
	}
}
