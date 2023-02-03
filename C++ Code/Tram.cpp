#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long itung=0;
	int a,b;
	long long batasmin=-1;

	while(n--){
		cin >> a >> b;
		itung-=a;
		itung+=b;

		if(itung>batasmin){
			batasmin=itung;
		}
	}
	cout << batasmin << endl;
}