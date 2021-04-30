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

int arr[10000];
int func(int x){
	if(x==1){
		return 1;
	}
	else{
		swap(arr[x],arr[x-1]);
		return func(x-1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
	func(n);

	for(int i=1;i<=n;i++){
		cout << arr[i] << ' ';
	}
}
