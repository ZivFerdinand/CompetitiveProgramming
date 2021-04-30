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

	int arr[n+10];

	int even,odd;
	even=odd=0;

	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i]%2==0){
			even++;
		}
		else
			odd++;
	}

	for(int i=0;i<n;i++){
		if(even>odd){
			if(arr[i]%2==1){
				cout << i+1 << '\n';
				break;
			}
		}
		else{
			if(arr[i]%2==0){
				cout << i+1 << '\n';
				break;
			}
		}
	}
}
