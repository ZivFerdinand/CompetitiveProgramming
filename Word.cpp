#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
	int uppercase,lowercase;

	uppercase=lowercase=0;

	for(int i=0;i<s_len;i++){
		if(s[i]>=65 && s[i]<=91){
			uppercase++;
		}
		else{
			lowercase++;
		}
	}

	if(lowercase>uppercase){
		for(int i=0;i<s_len;i++){
			char a=s[i];
			s[i]=tolower(a);
		}
		cout << s << endl;
	}
	else if(uppercase>lowercase){
		for(int i=0;i<s_len;i++){
			char a=s[i];
			s[i]=toupper(a);
		}
		cout << s << endl;
	}
	else{
		for(int i=0;i<s_len;i++){
			char a=s[i];
			s[i]=tolower(a);
		}
		cout << s << endl;
	}
}
