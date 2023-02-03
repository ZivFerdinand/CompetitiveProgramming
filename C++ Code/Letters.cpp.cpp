	#include <iostream>
	using namespace std;
	int main(){
		long long n,m;
		cin >> n >> m;

		long long arr[n+10];

		for(long long i=0;i<n;i++){
			cin >> arr[i];
			if(i>0){
				arr[i]+=arr[i-1];
			}
		}

		long long a;
		long long i=0;
		long long j=0;
		
		while(m--){
			cin >> a;
			for(long long k=j;k<n;k++){
				if(k==0){
					if(a<=arr[k]){
						cout << k+1 << ' ' << a << endl;
						j=k;
						break;
					}
				}
				else if(k>0){
					if(a>=arr[k-1] && a<=arr[k]){
						cout << k+1 << ' ' << a-arr[k-1] << endl;
						j=k;
						break;
					}
				}
			}
		}
	}