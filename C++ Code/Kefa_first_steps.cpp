#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long arr[n+10];
	int cnt=0;
	int max_limit=1;

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		if(i==0){
			cnt++;
		}
		else if(i==n-1 && arr[i]>=arr[i-1]){
			cnt++;
			if(cnt>max_limit)
				max_limit=cnt;
			cnt=1;
		}
		else if(arr[i]>=arr[i-1]){
			cnt++;
		}
		else{
			if(cnt>max_limit){
				max_limit=cnt;
			}
			cnt=1;
		}
	}
	cout << max_limit << endl;
}
