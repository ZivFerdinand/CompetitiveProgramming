#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	cin >> n;

	int batas=-1;

	int arr[150];
	memset(arr,0,sizeof arr);
	
	for(int i=0;i<n;i++){
		int a;
		cin >> a;

		arr[a]++;
		if(arr[a]>batas){
			batas=arr[a];
		}
	}

	cout << batas << endl;
}
