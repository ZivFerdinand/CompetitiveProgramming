#include <iostream>
using namespace std;

int fungsi(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 1;
	}
	if(n%2==0){
		return n/2*fungsi(n-1);
	}
	else{
		return n*fungsi(n-1);
	}
}

int main(){
	int n;
	cin >> n;
	
	cout << fungsi(n) << endl;
}
