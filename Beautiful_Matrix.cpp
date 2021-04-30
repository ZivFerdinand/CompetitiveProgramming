#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int arr[10][10];
	int catat_i,catat_j;

	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin >> arr[i][j];
			if(arr[i][j]==1){
				catat_i=i;
				catat_j=j;
			}
		}
	}
	cout << abs((3-catat_i)) + abs((3-catat_j)) << endl;
}
