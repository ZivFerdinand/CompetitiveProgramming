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
	int n,rotate,q;
	cin >> n >> rotate >> q;

	rotate%=n;

	int arr[n+10];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int index_asked;
	while(q--){
		cin >> index_asked;

		if(rotate%n==0)	cout << arr[index_asked] << '\n';
		else{
			if(index_asked-rotate>=0){
				cout << arr[index_asked-rotate] << '\n';
			}
			else{
				int rand=rotate-index_asked;
				cout << arr[n-rand] << '\n';
			}
		}
	}

}