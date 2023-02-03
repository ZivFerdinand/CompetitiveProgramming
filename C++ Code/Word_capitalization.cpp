#include <iostream>
#include <cctype>
using namespace std;
int main(){
	string s;
	cin >> s;

	char lol=s[0];
	s[0]=toupper(lol);

	cout << s << endl;
}