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
	int n;
	cin >> n;

	int arr[10],x;
	memset(arr,0,sizeof arr);
	for(int i=0;i<n;i++){
		cin >> x;
		arr[x]++;
	}

	int max_limit=0;
	for(int i=1;i<=5;i++){
		if(arr[i]>max_limit)
			max_limit=arr[i];
	}
	for(int i=1;i<=5;i++){
		if(arr[i]==max_limit){
			cout << i << '\n';
			break;
		}
	}
}

