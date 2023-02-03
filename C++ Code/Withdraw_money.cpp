#include <iostream>
using namespace std;
int main(){
	long long n;
	int itung=0;
	cin >> n;

	if(n%100!=0){
		while(n>0){
			if(n>=100){
				n-=100;
				itung++;
			}
			else if(n>=20){
				n-=20;
				itung++;
			}
			else if(n>=10){
				n-=10;
				itung++;
			}
			else if(n>=5){
				n-=5;
				itung++;
			}
			else if(n>=1){
				n-=1;
				itung++;
			}
		}
	}
	else{
		itung=n/100;
	}
	cout << itung << endl;
}
