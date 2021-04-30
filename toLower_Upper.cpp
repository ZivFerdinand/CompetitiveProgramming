#include <iostream>
#include <cctype>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
	int i=0;
	char c;

	while(i<s_len){
		if(s[i]>=65 && s[i]<=91){
			c=s[i];
			putchar(tolower(c));
		}
		else if(s[i]>=97 && s[i]<=123){
			c=s[i];
			putchar(toupper(c));
		}
		i++;
	}
	cout << endl;
}