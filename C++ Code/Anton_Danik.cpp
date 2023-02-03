#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	int d=0,a=0;

	string s;
	cin >> s;

	for(int i=0;i<n;i++){
		if(s[i]=='D'){
			d++;
		}
		else{
			a++;
		}
	}

	if(d>a){
		cout << "Danik" << endl;
	}
	else if(a>d){
		cout << "Anton" << endl;
	}
	else{
		cout << "Friendship" << endl;
	}
}