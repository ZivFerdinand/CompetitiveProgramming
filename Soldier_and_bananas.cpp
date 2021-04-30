#include <iostream>
using namespace std;
int main(){
	long long k,n,w;
	cin >> k >> n >> w;

	long long total=0;

	for(int i=1;i<=w;i++){
		total+=i*k;
	}

	if(n<=total){
		cout << total-n << endl;
	}
	else{
		cout << 0 << endl;
	}
}