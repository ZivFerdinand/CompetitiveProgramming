#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	for(int i=1;i<=n;i++){
		if(i%2==0 && i==n){
			cout << "I love it\n";
		}
		else if(i%2!=0 && i==n){
			cout << "I hate it\n";
		}
		else if(i%2==0){
			cout << "I love that ";
		}
		else if(i%2!=0){
			cout << "I hate that ";
		}
	}
}
