#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		if(n/10==0){
			cout << "satuan" << endl;
		}
		else if(n/100==0){
			cout << "puluhan" << endl;
		}
		else if(n/1000==0){
			cout << "ratusan" << endl;
		}
		else if(n/10000==0){
			cout << "ribuan" << endl;
		}
		else if(n/100000==0){
			cout << "puluhribuan" << endl;
		}
	}
}