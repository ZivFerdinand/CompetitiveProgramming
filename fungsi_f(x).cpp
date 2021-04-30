g#include <iostream>
#include <cmath>
using namespace std;
// 1 1 2 1
// 2 + 1
// 3
int fungsi(int aa,int bb,int kk,int xx){	
	int fx;
	for(int i=0;i<kk;i++){
		fx = abs((aa*xx) + bb);
		xx=fx;
	}
	return xx;
}

int main(){
	int a,b,k,x;
	cin >> a >> b >> k >> x;

	cout << fungsi(a,b,k,x) << endl;
	return 0;
}