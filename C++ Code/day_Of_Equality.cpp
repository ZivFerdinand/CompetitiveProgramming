#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	int arr[n+10];
	int batasterbesar=0;
	int total=0;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];

		if(arr[i]>batasterbesar){
			batasterbesar=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		total+=(batasterbesar-arr[i]);
	}
	cout << total << endl;
}
