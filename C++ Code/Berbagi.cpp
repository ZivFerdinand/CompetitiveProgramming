#include <iostream>
using namespace std;
int main(){
	int q;
	cin >> q;
	
	int a,b;
	int i=1;
	
	while(q--){
		cin >> a >> b;
		b++;
		if(a%b==0){
			cout << "Kasus #" << i << ": ya\n";
		}
		else{
			cout << "Kasus #" << i << ": tidak\n";
		}
		i++;
	}
}
