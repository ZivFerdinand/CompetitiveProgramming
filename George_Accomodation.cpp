#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long a,b;
	int itung=0;

	while(n--){
		cin >> a >> b;

		if(b-a>=2){
			itung++;
		}
	}

	cout << itung << endl;
}