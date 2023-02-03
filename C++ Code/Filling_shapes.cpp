#include <iostream>
#define ll long long
using namespace std;

int main(){
	long long n;
	cin >> n;

	if(n%2){
		cout << 0 << '\n';
	}
	else if(!(n%2)){
                long long z=n;
                n=1;
                for(long long i=0;i<z/2;i++){
                    n*=2;
                }
		cout << n<< '\n';
	}
}