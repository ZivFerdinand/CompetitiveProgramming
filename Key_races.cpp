#include <iostream>
using namespace std;
int main(){
	long long s,v1,v2,t1,t2;

	cin >> s >> v1 >> v2 >> t1 >> t2;

	long long _speedA=s*v1+2*t1;
	long long _speedB=s*v2+2*t2;

	if(_speedA<_speedB){
		cout << "First\n";
	}
	else if(_speedB<_speedA){
		cout << "Second\n";
	}
	else{
		cout << "Friendship\n";
	}
}
