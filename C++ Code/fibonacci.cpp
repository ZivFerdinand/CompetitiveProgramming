/*	2 1 --------------
	2 1 3 4 7 11 18 29
*/
4 5 9 14 22

#include <iostream>
using namespace std;
int main(){
	int n,m,f1,f_new,bil_akhir,bil_awal,bilAsli;
	cin >> n >> m;

	for(int i=0;i<3;i++){
		bilAsli=n+m;
		m=n;
		n=bilAsli;
	}
	
	cout << endl << bilAsli << endl;
}
