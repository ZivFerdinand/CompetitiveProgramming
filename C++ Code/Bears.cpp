#include <iostream>
using namespace std;
int main(){
	int a,b,itung=0;
	cin >> a >> b;

	while(a<=b){
		a*=3;
		b*=2;
		itung++;
	}
	cout << itung << endl;
	

}
