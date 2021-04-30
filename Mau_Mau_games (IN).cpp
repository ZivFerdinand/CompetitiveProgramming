#include <iostream>
using namespace std;
int main(){
	bool bolehlanjut=true;
	string s,s1;
	cin >> s;

	int n=5;

	while(n--){
		cin >> s1;

		if(s[0]==s1[0] || s[1]==s1[1]){
			cout << "YES" << endl;
			bolehlanjut=false;
			break;
		}
	}
	if(bolehlanjut==true){
		cout << "NO" << endl;
	}
}
