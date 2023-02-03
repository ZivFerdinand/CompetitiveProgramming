#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	int batasterbesar=0;

	int arr[n+10][n+10];

	for(int i=0;i<n;i++){
		arr[0][i]=1;
	}
	for(int i=0;i<n;i++){
		arr[i][0]=1;
	}

	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			arr[i][j]=arr[i-1][j]+arr[i][j-1];
			if(arr[i][j]>batasterbesar){
				batasterbesar=arr[i][j];
			}
		}
	}

	if(n>1){
		cout << batasterbesar << endl;
	}
	else{
		cout << 1 << endl;
	}
}
