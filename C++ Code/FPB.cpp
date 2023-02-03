#include <iostream>
using namespace std;

int fpb(int x,int y){
	if(y==0){
		return x;
	}
	else{
		return fpb(y,x%y);
	}
}

int main(){
	int a,b;
	cin >> a >> b;

	cout << fpb(a,b) << endl; 
}
