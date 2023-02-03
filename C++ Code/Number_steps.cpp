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
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	while(n--){
		int x,y;
		cin >> x >> y;

		if(x==y && !y && !x){
			cout << 0 << '\n';
		}
		else if(x==y && x==1 && y==1){
			cout << 1 << '\n';
		}
		else if(x==y && !(x%2) && !(y%2)){
			// x y genap
			cout << x*2 << '\n';
		}
		else if(x==y && x%2 && y%2){
			// x y ganjil
			int total=5;
			for(int i=1;i<x/2;i++){
				total+=4;
			}
			cout << total << '\n';
		}
		else if(y==x-2 && x%2){
			int total=3;
			for(int i=1;i<x/2;i++){
				total+=4;
			}
			cout << total << '\n';
		}
		else if(y==x-2 && !(x%2)){
			int total=2;
			for(int i=1;i<x/2;i++){
				total+=4;
			}
			cout << total << '\n';
		}
		else		cout << "No Number\n";
	}
}