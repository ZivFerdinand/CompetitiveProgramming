#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;

	int k=a+b;
	k/=2;

	if(abs(a-k)==abs(b-k)){
		cout << k << endl;
	}
	else{
		cout << "IMPOSSIBLE\n";
	}
}