#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	cin >> n;

	int mishka=0,chris=0;

	while(n--){
		cin >> a >> b;

		if(a>b){
			mishka++;
		}
		else if(b>a){
			chris++;
		}
	}

	if(mishka>chris){
		cout << "Mishka" << endl;
	}
	else if(chris>mishka){
		cout << "Chris" << endl;
	}
	else{
		cout << "Friendship is magic!^^" << endl;
	}
}
