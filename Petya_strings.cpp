#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;
int main(){
	string s,s1;

	cin >> s >> s1;

	int satu,dua;
	satu=dua=0;

	int length=s.size();

	for(int i=0;i<length;i++){
		char a=s[i];
		char b=s1[i];

		s[i]=tolower(a);
		s1[i]=tolower(b);
	}

	if(s>s1){
		cout << 1 << endl;
	}
	else if(s1>s){
		cout << -1 << endl;
	}
	else{
		cout << 0 << endl;
	}
}