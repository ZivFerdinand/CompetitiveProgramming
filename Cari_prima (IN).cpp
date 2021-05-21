#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,sum=0,j=2;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> a;
		for(int j=1;j<=a;j++){			
			if(j*j>a){
				break;
			}
			if(a%j==0){
				sum++;
			}
		}
			
		if(a==1){
			cout << "BUKAN" << endl;
		}
		else if(sum==1){
			cout << "YA" << endl;
		}
		else if(sum>=2){
			cout << "BUKAN" << endl;
		}
		sum=0;
	}
}

/*

*/
