#include <iostream>
using namespace std;


int main(){
	string s;
	int itung=0;
	cin >> s;

	int s_len=s.size();

	for(int i=0;i<s_len;i++){
		if(s[i]=='a'){
			itung++;
		}
	}

	int _itung = s_len-itung;

	if(itung>_itung){
		cout << itung+_itung << endl;
	}
	else if(itung==1){
		cout << 1 << endl;
	}
	else{
		cout  << itung+(itung-1);
	}
}
