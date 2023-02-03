#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long arr[n+5];
	long long satu,dua,tiga,empat,banyak_taxi,rand;
	satu = dua = tiga = empat = banyak_taxi = 0;
	

	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i]==1){
			satu++;
		}
		else if(arr[i]==2){
			dua++;
		}
		else if(arr[i]==3){
			tiga++;
		}
		else{
			empat++;
		}
	}

	banyak_taxi+=empat;

	rand=min(tiga,satu);
	satu-=rand;
	tiga-=rand;
	banyak_taxi+=rand;
	banyak_taxi+=tiga;

	rand=satu+(2*dua);
	if(rand%4==0){
		banyak_taxi+=rand/4;
	}
	else{
		banyak_taxi+=rand/4;
		banyak_taxi++;
	}

	cout << banyak_taxi << endl;
}
