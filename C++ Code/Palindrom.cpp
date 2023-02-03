#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

//abcd efgh
//abc d efg

int i,j;
string s;

int fungsi(string s,int i,int j){
	if(i==j || abs(i-j)==1){
		cout << "YA" << endl;
	}
	else if(s[i]!=s[j]){
		cout << "BUKAN" << endl;
	}
	else if(s[i]==s[j]){
		fungsi(s,i+1,j-1);
	}
}

int main(){
	string s;
	cin >> s;

	string s1,s2;

	int s_len=s.size();

	i=0;
	j=s_len-1;

	fungsi(s,i,j);
}
