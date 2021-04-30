#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	int x,itung;
	x=itung=0;

	for(int i=0;i<n;i++){
		if(s[i]=='x'){
			itung++;
		}	
		if(s[i]!='x' || i==n-1){
			if(itung>2){
				x+=itung-2;
			}
			itung=0;
		}
	}

	cout << x << endl;
}
