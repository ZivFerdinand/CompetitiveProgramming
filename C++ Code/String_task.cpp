#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	int s_len=s.size();
	
	for(int i=0;i<s_len;i++){
		if(s[i]=='a' ||s[i]=='i' ||s[i]=='u' ||s[i]=='e' ||s[i]=='o' ||s[i]=='y'){
			continue;
		}
		else if(s[i]=='A' ||s[i]=='I' ||s[i]=='U' ||s[i]=='E' ||s[i]=='O' ||s[i]=='Y'){
			continue;
		}
		else{
			cout << '.';
			if(s[i]>=65 && s[i]<=91){
				char rand=s[i];
				s[i]=tolower(rand);
				cout << s[i];
			}
			else{
				cout << s[i];
			}
		}
	}
}
