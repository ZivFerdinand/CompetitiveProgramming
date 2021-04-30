#include <iostream>
#include <cstdio>
using namespace std;

int fungsi(int bintang){
	if(bintang>0){
		fungsi(bintang-1);
		for(int i=1;i<=bintang;i++){
			cout << '*';
		}
		cout << endl;
		return fungsi(bintang-1);
	}
}

int main(){
	int n;
	cin >> n;
	fungsi(n);
}
