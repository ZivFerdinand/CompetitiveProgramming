#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int a,b,c;
	int itung=0;
	
	while(n--){
		cin >> a;
		cin >> b;
		cin >> c;
		
		if(a==1 && b==1 || a==1 && c==1 || b==1 && c==1 || a==1 && b==1 && c==1){
			itung++;
		}
	}
	cout << itung << endl;
}
