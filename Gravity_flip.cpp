#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	int arr[n+10];

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}	

	sort(arr,arr+n);

	for(int i=0;i<n;i++){
		if(i<n-1){
			cout << arr[i] << ' ';
		}
		else{
			cout << arr[i] << '\n';
		}
	}
}
