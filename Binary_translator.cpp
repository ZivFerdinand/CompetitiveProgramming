#include <iostream>
#include <cstring>
using namespace std;

string s;

long long func(long long n){
	if(n==1){
		s+='1';
		return 1;
	}
	else if(n%2==0){
		s+='0';
		return func(n/2);
	}
	else{
		s+='1';
		return func(n/2);
	}
}

int main(){
	long long n;
	string s_new;
	cin >> n;
	
	s.clear();

	func(n);

	long long s_len=s.size();
	
	for(long long i=s_len-1;i>=0;i--){
		s_new+=s[i];
	}
	if(s_new[0]=='0'){
		int i=0;
		while(s_new[i]=='0'){
			s_new.erase(i,1);
			i++;
		}
	}
	cout << s_new << endl;
}
