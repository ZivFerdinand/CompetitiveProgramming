#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


bool sudah[1010];

int main(){
	long long n;
	cin >> n;

	long long arr[n+10];
	long long isi[n+10];
	long long itung=0;
	memset(sudah,false,sizeof sudah);

	for(long long i=0;i<n;i++){
		cin >> arr[i];
	}

	for(long long i=n-1;i>=0;i--){
		if(sudah[arr[i]]==false){
			sudah[arr[i]]=true;
			
			itung++;
		}
		else{
			arr[i]=0;
		}
	}

	cout << itung << endl;
	long long keluar = 1;
	
	for(long long i=0;i<n;i++){
		if(arr[i]==0){
			continue;
		}
		else if(keluar<itung){
			keluar++;
			cout << arr[i] << ' ';
		}
		else{
			cout << arr[i] << endl;
		}
	}
	return 0;
}
