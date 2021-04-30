#include <iostream>
using namespace std;
int main(){
	long long arr[10][10];

	int n=6;	long long sum=0;	long long max_limit=-100;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}

	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			sum+=arr[i][j] + arr[i][j+1] + arr[i][j+2];
			sum+=arr[(i+1)][j+1];
			sum+=arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

			if(sum>max_limit){
				max_limit=sum;
			}
			sum=0;
		}
	}
	cout << max_limit << endl;
}