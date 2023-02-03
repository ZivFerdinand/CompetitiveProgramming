#include <iostream>
using namespace std;

int arr[1000000];

int main(){
	int cek,q,n;
	cin >> n;
	
	for(int i=2;i<=n;i++){
		if(i*i>n){
			cout << n << endl;
			break;
		}
		for(int j=2;j<i;j++){
			if(i%j==0){
				cek=1;
			}
			if(j*j>n){
				break;
			}
			if(n==1){
				break;
			}
		}
		if(cek==0){
			q=i;			
		}
		while(n%q==0 && n>1){
			n=n/q;
			arr[q]++;
			if(arr[q]>1 && n%q!=0){
			 	cout << q << '^' << arr[q];
			 	if(n>1){
			 		cout << " x ";
		 		}
		 		else{
		 			cout << endl;
		 		}
			}
			else if(arr[q]==1 && n%q!=0){
			 	cout << q;
			 	if(n>1){
			 		cout << " x ";
			 	}
			 	else{
			 		cout << endl;
			 	}	
			}
			if(n==1){
				break;
			}
		}
		if(n==1){
				break;
		}
		cek=0;
	}
}
