#include <iostream>
using namespace std;
#include <cstring>

int main(){
	int n;
	cin >> n;

	long long min = 99999999999999999;
	int arr[n+10];
	int test[50];

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	memset(test,0,sizeof test);

	for(int i=0;i<n;i++){
		if(arr[i]==4){
			test[4]++;
		}
		else if(arr[i]==8 && test[4]>0){
			test[8]++;
			test[4]--;
		}
		else if(arr[i]==15 && test[8]>0){
			test[15]++;
			test[8]--;
		}
		else if(arr[i]==16 && test[15]>0){
			test[16]++;
			test[15]--;
		}
		else if(arr[i]==23 && test[16]>0){
			test[23]++;
			test[16]--;
		}
		else if(arr[i]==42 && test[23]>0){
			test[42]++;
			test[23]--;
		}
	}
	cout << n-(test[42]*6) << endl;
}
