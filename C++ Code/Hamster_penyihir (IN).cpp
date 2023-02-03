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
	string s_baru;
	
	int q;
	cin >> q;
	int rand=1;

	while(q--){
		cin >> n;
		
		s.clear();

		func(n);

		long long s_len=s.size();
		
		long long cnt=0;

		for(long long i=s_len-1;i>=0;i--){
			if(s[i]==49){
				cnt++;
			}
		}
		
		cout << "Case #" << rand << ": " << 100-cnt << '\n';
		rand++;
	}
}