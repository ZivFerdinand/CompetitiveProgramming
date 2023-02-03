#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;

	long long terkecil=9999999999;
	long long terbesar=0;

	long long arr[n+15]; 
	long long i=0;

	while(i<n){
		cin >> arr[i];

		if(arr[i]<terkecil){
			terkecil=arr[i];
		}
		if(arr[i]>terbesar){
			terbesar=arr[i];
		}

		i++;
	}

	i=0;
	long long banyak_kecil=0;
	long long banyak_besar=0;

	while(i<n){
		if(arr[i]==terkecil){
			banyak_kecil++;
		}
		if(arr[i]==terbesar){
			banyak_besar++;
		}
		i++;
	}
	
	if(banyak_besar==banyak_kecil && banyak_besar==n){
		cout << 0 << ' ';
		long long itung=0;
		for(long long i=banyak_besar-1;i>=1;i--){
			itung+=i;
		}
		cout << itung << endl;
	}
	else{
		cout << abs(terbesar-terkecil) << ' ' << banyak_besar*banyak_kecil << endl;
	}
}
