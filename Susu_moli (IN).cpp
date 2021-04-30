#include <iostream>
using namespace std;
int main(){
	long long q;
	cin >> q;

	long long n,a,b,k;
	int i=1;
	while(q--){
		cin >> n >> a >> b >> k;
		cout << "Kasus #" << i << ": ";
		cout << (n+(b*k))-a*k << endl;
		i++;
	}
}
