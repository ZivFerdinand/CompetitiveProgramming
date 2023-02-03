#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	ll a;
	for(int i=0;i<n;i++){
		cin >> a;	

		if(a%2==0){
			cout << a-1;
		}	
		else{
			cout << a;
		}
		if(i<n-1){
			cout << ' ';
		}
		else{
			cout << '\n';
		}
	}

}
