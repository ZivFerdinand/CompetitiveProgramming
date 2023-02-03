#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
		
	if(s_len<7){
		cout << "NO\n";
	}
	else{
		int sama=0;
		bool danger=false;

		for(int i=0;i<s_len;i++){
			if(i==0){
				sama++;
			}
			else if(s[i]==s[i-1]){
				sama++;
			}
			else{
				sama=1;
			}
			if(sama==7){
				cout << "YES\n";
				danger=true;
				break;
			}
		}
		
		if(!danger){
			cout << "NO\n";
		}
	}
}
