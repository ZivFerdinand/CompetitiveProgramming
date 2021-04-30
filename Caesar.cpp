#include <iostream>
using namespace std;
int main(){
	string s;		int n,find;
	cin >> s >> n;
	int test=0;
	int s_len=s.size();

	while(test<s_len){		
		find=(int)s[test];
		if((find+n)>122){
			find+=n;
			find-=26;
		}
		else{
			find+=n;
		}
		cout << (char)find;
		test++;
	}
	cout << endl;
}
