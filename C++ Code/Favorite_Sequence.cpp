#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;


int main(){	
	int q;
	cin >> q;

	int n;
	ll arr[1000];
	while(q--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> arr[i];
//012  0123
		for(int i=0;i<n/2;i++){
			cout << arr[i] << ' ' << arr[n-i-1] << ' ';
		}

		if(n%2)
			cout << arr[n/2];
		cout <<  '\n';


	}
}
/*

*/
