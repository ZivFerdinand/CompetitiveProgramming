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
	int n;
	cin >> n;

	if(n%2==0){
		cout << (n/2)+1 << '\n';
		cout << 1 << ' ' << 1 << ' ';

		for(int i=0;i<(n/2)-1;i++){
			if(i<(n/2)-2){
				cout << "2 ";
			}
			else{
				cout << 2 << '\n';
			}
		}
	}
	else{
		cout << n/2 << '\n';
		for(int i=0;i<(n/2)-1;i++){
			if(i<(n/2)-2){
				cout << "2 ";
			}
			else{
				cout << "2 3\n";
			}
		}
	}
}
