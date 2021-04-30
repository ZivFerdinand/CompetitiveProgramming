#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long double n,total=0;
	cin >> n;
	
	long double x;
	
	for(int i=0;i<n;i++){
		cin >> x;
		total+=x;
	}

	cout << fixed << setprecision(12) << total/n << endl;
}
