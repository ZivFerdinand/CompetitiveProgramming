#include <iostream>
using namespace std;
int main(){
	int n,m,k1,k2;
	cin >> n >> m >> k1 >> k2;

	if(n==m){
		cout << "Second" << endl;
	}
	else if(n>m){
		cout << "First" << endl;
	}
	else{
		cout << "Second" << endl;
	}
}