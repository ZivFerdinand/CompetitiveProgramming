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
	int arr[5];
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr,arr+3);
	int a=arr[0],b=arr[1],c=arr[2];

	if(a+b>c){
		cout << "0\n";
	}
	else{
		cout << c-(a+b)+1 << '\n';
	}
}