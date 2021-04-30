#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	
	int itung;
	long long x;

	while(n--){
		itung=0;
		cin >> x;

		bool lanjut=true;
		while(lanjut){
			if(x%2==0){
				x/=2;
				itung++;
			}
			if(x%3==0){
				x*=2;
				x/=3;
				itung++;
			}
			if(x%5==0){
				x*=4;
				x/=5;
				itung++;
			}
			if(x%2!=0 && x%3!=0 && x%5!=0){
				lanjut=false;
				if(x==1){
					cout << itung << endl;
				}
				else{
					cout << -1 << endl;
				}
			}
		}
	}
}
