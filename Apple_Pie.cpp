#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,l;
	cin >> n >> l;

	bool pernah_nol=false;

	int x=0;
	int total=0;
	int test=1000;

	for(int i=n;i>=1;i--){
		x=((l+i)-1);
		total+=x;
		if(abs(x)<test){
			test=x;
			if(test==0){
				pernah_nol=true;
			}
		}
	}

	if(pernah_nol==true){
		cout << total << endl;
	}
	else{
		cout << total-test << endl;
	}
}
