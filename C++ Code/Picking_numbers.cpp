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
	int n,x;
	cin >> n;

	int arr[110];
	memset(arr,0,sizeof arr);
	for(int i=0;i<n;i++){
		cin >> x;
		arr[x]++;
	}

	int max_limit=2;
	for(int i=1;i<=99;i++){
		if(arr[i]+arr[i+1]>max_limit){
			max_limit=arr[i]+arr[i+1];
		}
	}

	cout << max_limit << '\n';
}