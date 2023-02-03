/*
aba 10
a=2
abaabaabaa
*/
#include <iostream>
using namespace std;
int main(){
	string s;
	long long n,itung=0;;
	cin >> s >> n;

	long long s_len=s.size();

	for(int i=0;i<s_len;i++){
		if(s[i]=='a'){
			itung++;
		}
	}
	itung=itung*(n/s_len);

	long long q=n%s_len;
	for(int i=0;i<q;i++){
		if(s[i]=='a'){
			itung++;
		}
	}
	cout << itung << endl;
}