#include <iostream>
using namespace std;
int main(){
	int n,x;
	bool bolehkeluar=true;
	cin >> n;

	while(n--){
		cin >> x;
		if(x==1){
			bolehkeluar=false;
			cout << "HARD" << endl;
			break;
		}
	}

	if(bolehkeluar==true){
		cout << "EASY" << endl;
	}
}