#include <iostream>
SALAH
using namespace std;
int main(){
	int n,m,test=0,test1=0;
	cin >> n;
	int arr[1010];

	for(int i=0;i<1010;i++){
		arr[i]=0;
	}
	for(int i=0;i<n;i++){
		cin >> m;
		arr[m]++;

		if(m>test && arr[m]>=test1){
			test=m;
			test1=arr[m];
		}
	}
	cout << test << endl;
}
