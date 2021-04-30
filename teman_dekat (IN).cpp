#include <iostream>
#include <cmath>
using namespace std;
int d;
int pangkat(int x){
	int z=1;
	for(int i=0;i<d;i++){
		z=z*x;
	}
	return z;
}

int main(){
	int n;	int min=-2,max=1000;

	cin >> n >> d;
	int arr[n+10][5];
	int T[n+10][n+10];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin >> arr[i][j];
		}
	}
	// Ti,j = |Xj − Xi|D + |Yj − Yi|D
	// org{1,2}, org{1,3}, org{2,3}

	// org1 = arr[0][0] && arr[0][1]
	// org2 = arr[1][0] && arr[1][1]
	// org3 = arr[2][0] && arr[2][1]
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(j==i){
				continue;
			}
			int x=(abs(arr[i][0] - arr[j][0]));
			int y=(abs(arr[i][1] - arr[j][1]));
			T[i][j] = pangkat(x) + pangkat(y);
			
			if(T[i][j]<max){
				max=T[i][j];
 			}
			else if(T[i][j]>min){
				min=T[i][j];
			}
		}
	}
	
	// for(int i=n-1;i>=0;i--){
	// 	for(int j=0;j<n-1;j++){
	// 		if(j==i || i==j){
	// 			continue;
	// 		}
	// 		int x=(abs(arr[i][0] - arr[j][0]));
	// 		int y=(abs(arr[i][1] - arr[j][1]));
	// 		T[i][j] = pangkat(x) + pangkat(y);
	// 		if(T[i][j]>min){
	// 			min=T[i][j];
	// 		}
	// 		else if(T[i][j]<max){
	// 			max=T[i][j];
	// 		}
	// 	}
	// }
	
	if(n!=2){
		cout << max << ' ' << min << endl;
	}
	else if(n==2){
		cout << max << ' ' << max << endl;
	}
	return 0;
}
