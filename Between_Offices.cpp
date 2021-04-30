// 10
// SSFFSFFSFF

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	int sf=0,fs=0;

	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			continue;
		}
		else{
			if(s[i]=='F'){
				sf++;
			}
			else{
				fs++;
			}
		}
	}
	if(sf>fs){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
