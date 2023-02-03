#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int x,y,z;
	cin >> x >> y >> z;

	if(x<y){
		if(y-z>x){
			cout << "-\n";
		}
		else{
			cout << "?\n";
		}
	}
	else if(x>y){
		if(x-z>y){
			cout << "+\n";
		}
		else{
			cout << "?\n";
		}
	}
	else{
		if(!z)	cout << "0\n";
		else	cout << "?\n";
	}
}