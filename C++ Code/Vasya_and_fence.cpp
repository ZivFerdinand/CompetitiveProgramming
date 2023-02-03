#include <iostream>
using namespace std;
int main(){
	int n,h,itung=0;
	cin >> n >> h;

	int arr[n+10];

	for(int i=0;i<n;i++){
		cin >> arr[i];

		if(arr[i]>h){
			itung+=2;
		}
		else{
			itung++;
		}
	}
	cout << itung << endl;
}