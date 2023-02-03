#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
	bool lanjut=true;

	for(int i=0;i<s_len;i++){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
			cout << "YES\n";
			lanjut=0;
			break;
		}
	}

	if(lanjut){
		cout << "NO\n";
	}
}