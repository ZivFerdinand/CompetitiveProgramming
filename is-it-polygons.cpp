#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double n,x;
	cin >> n;

	while(n--){
		cin >> x;

		if(360/(x-180)==trunc(360/(x-180))){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}