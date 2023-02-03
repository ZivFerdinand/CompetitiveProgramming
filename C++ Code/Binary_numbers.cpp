#include <iostream>
#include <cstring>
using namespace std;

string s;

long long fungsi(long long n){
	if(n==1){
		s+='1';
		return 1;
	}
	else if(n%2==0){
		s+='0';
		return fungsi(n/2);
	}
	else{
		s+='1';
		return fungsi(n/2);
	}
}

int main(){
	long long n;
    long long min=0;
	string s_baru;
	cin >> n;
	long long itung=0;
	s.clear();

	fungsi(n);

	long long s_len=s.size();
	
	for(long long i=s_len-1;i>=0;i--){
		s_baru+=s[i];
	}
    s_len=s_baru.size();
    for(int i=0;i<s_len;i++){
        if(s[i]=='1'){
            itung++;
        }
        else if(s[i]=='0'){
            itung=0;
        }
        if(itung>min){
            min=itung;
        }
    }
    cout << min << endl;
}
