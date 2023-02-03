#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,d,itung=0;
	cin >> n >> d;

	int arr[n+10][d+10];

	for(int i=0;i<n;i++){
		for(int j=0;j<d;j++){
			cin >> arr[i][j];
		}
	}
// 3 2			
// 1 2
// 5 5
// -2 8

// 3 4
// -3 7 8 2
// -12 1 10 2
// -2 8 9 3
	for(int i=0;i<n;i++){
		int total=0;
		for(int k=i+1;k<n;k++){
			total=0;
			for(int j=0;j<d;j++){
				total += pow(abs(arr[k][j]-arr[i][j]),2);
			}
			if(sqrt(total)==trunc(sqrt(total))){
				itung++;
			}
		}
	}
	cout << itung << endl;
}
