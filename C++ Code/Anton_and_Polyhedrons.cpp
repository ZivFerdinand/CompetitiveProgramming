#include <iostream>
using namespace std;
int main(){
	int n,itung=0;
	cin >> n;

	string s;

	while(n--){
		cin >> s;

		if(s=="Tetrahedron"){
			itung+=4;
		}
		else if(s=="Cube"){
			itung+=6;
		}
		else if(s=="Octahedron"){
			itung+=8;
		}
		else if(s=="Dodecahedron"){
			itung+=12;
		}
		else{
			itung+=20;
		}
	}
	cout << itung << endl;
}