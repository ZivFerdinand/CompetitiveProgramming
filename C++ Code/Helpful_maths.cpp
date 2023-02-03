#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
	int satu,dua,tiga;

	satu = dua = tiga = 0;

	for(int i=0;i<s_len;i+=2){
		if(s[i]=='1'){
			satu++;
		}
		else if(s[i]=='2'){
			dua++;
		}
		else if(s[i]=='3'){
			tiga++;
		}
	}

	for(int i=0;i<satu;i++){
		if(i<satu-1){
			cout << 1 << '+';
		}
		else{
			if(dua>0 || tiga>0){
				cout << "1+";
			}
			else{
				cout << 1 << endl;
			}
		}
	}
	for(int i=0;i<dua;i++){
		if(i<dua-1){
			cout << 2 << '+';
		}
		else{
			if(tiga>0){
				cout << "2+";
			}
			else{
				cout << 2 << endl;
			}
		}
	}
	for(int i=0;i<tiga;i++){
		if(i<tiga-1){
			cout << 3 << '+';
		}
		else{
			cout << 3 << endl;
		}
	}
}
