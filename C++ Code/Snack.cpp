#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long a,b;
	int i=1; 
	
	while(n--){
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
