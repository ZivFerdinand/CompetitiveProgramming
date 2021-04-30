#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;

	int itung=0;

	while(n--){
		cin >> s;
		if(s=="X++" || s=="++X"){
			itung++;
		}
		else{
			itung--;
		}
	}
	cout << itung << endl;
}