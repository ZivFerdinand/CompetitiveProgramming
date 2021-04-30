#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	cin >> n;

	int ulang;
	string s;
	int i=1;

	while(n--){
		cin >> ulang;
		getline(cin,s);
		getline(cin,s);

		cout << "Kasus #" << i << ":\n";

		while(ulang--){
			cout << s << endl;
		}
		i++;
	}
}
