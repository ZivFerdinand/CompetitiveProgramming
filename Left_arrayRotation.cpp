#include <iostream>
using namespace std;
int main(){
	long long n;
	int puter;
	cin >> n >> puter;

	long long arr[n+10];

	for(long long i=0;i<n;i++){
		cin >> arr[i];
	}

	puter%=n;

	long long i=puter;
	long long batas=n;

	while(n--){
		if(i<batas && n==0){
			cout << arr[i] << endl;
		}
		else if(i<batas){
			cout << arr[i] << ' ';
		}
		else if(i>=batas && n==0){
			i=0;
			cout << arr[i] << endl;
		}
		else if(i>=batas){
			i=0;
			cout << arr[i] << ' ';
		}
		i++;
	}
}	
