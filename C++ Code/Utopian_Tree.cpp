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
	int t;
	cin >> t;

	int x;
	while(t--){
		cin >> x;

		int total=0;
		for(int i=1;i<=n/2;i++){
			total+=pow(2,i);
		} 
		if(x%2==0){
			cout << total+1 << '\n';
		}
		else{
			cout << (total+1)*2 << '\n';
		}
	}
}