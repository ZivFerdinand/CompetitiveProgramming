#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	for(int i=0;i<n;i++){
		if(i>0){
			s.erase(i+1,i);
			n=s.size();
		}
	}
	cout << s << endl;
}
