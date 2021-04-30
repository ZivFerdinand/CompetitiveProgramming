#include <iostream>
using namespace std;
int main(){
	int q;
	cin >> q;


	while(q--){
		long long itung=0;
		long long a,b,c;
		cin >> a >> b >> c;

		itung+=a;	itung+=b;	itung+=c;

		cout << itung/2 << endl;
	}
}