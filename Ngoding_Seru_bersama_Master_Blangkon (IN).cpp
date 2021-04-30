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
	int arr[3],k;
	cin >> arr[0] >> arr[1] >> arr[2] >> k;

	sort(arr,arr+3);

	if(!k){
		for(int i=2;i>=0;i--){
			if(i>0){
				cout << arr[i] << ' ';
			}
			else{
				cout << arr[i] << '\n';
			}
		}
	}
	else{
		for(int i=0;i<3;i++){
			if(i<2){
				cout << arr[i] << ' ';
			}
			else{
				cout << arr[i] << '\n';
			}
		}
	}
}
