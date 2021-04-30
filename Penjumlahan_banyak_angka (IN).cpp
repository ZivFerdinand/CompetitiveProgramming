#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int q;
	cin >> q;

	long long a,un;
	long long i=1;
	
	while(q--){
		cin >> a >> un;
		
		if(a==un && a<0){
			cout << "Kasus #" << i << ": " << "Negatif" << endl;
		}
		else if(a==un && a>0){
			cout << "Kasus #" << i << ": " << "Positif" << endl;
		}
		else if(a==un && a==0){
			cout << "Kasus #" << i << ": " << "Nol" << endl;
		}
		else if(un>abs(a)){
			cout << "Kasus #" << i << ": " << "Positif" << endl;
		}
		else if(abs(a)>un){
			cout << "Kasus #" << i << ": " << "Negatif" << endl;
		}
		else{
			cout << "Kasus #" << i << ": " << "Nol" << endl;
		}
		i++;
	}
}
