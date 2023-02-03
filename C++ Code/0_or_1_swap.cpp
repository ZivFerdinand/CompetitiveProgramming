#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;

	int arr[n+10];
	int arr2[n+10];

	for(int i=0;i<n;i++){
		cin >> arr[i];
		arr2[i]=arr[i];
	}

	sort(arr2,arr2+n);
	//Diff Checker
	int beda=0;

	for(int i=0;i<n;i++){
		if(arr[i]!=arr2[i]){
			beda++;
		}
		if(beda>2){
			break;
		}
	}

	if(beda==0 || beda==2){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
}
