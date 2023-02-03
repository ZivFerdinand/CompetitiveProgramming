#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int itung=0;
	int sama=0;

	for(int i=0;i<n;i++){
		if(s[i]==s[i-1] && i>0){
			itung++;
		}
		else{
			itung=1;
		}

		if(itung>=2){
			sama++;
		}
	}
	
	cout << sama << endl;
}
