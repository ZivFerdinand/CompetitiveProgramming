#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);

	int a,b;
	cin >> a >> b;

	int arr[b+10];
	for(int i=0;i<b;i++){
		cin >> arr[i];
	}

	sort(arr,arr+b);

	int limit=5000;
	for(int i=0;i<=b-a;i++){
		if(abs(arr[i]-arr[i+a-1])<=limit){
			limit=abs(arr[i]-arr[i+a-1]);
		}
	}

	cout << limit << endl;
}
