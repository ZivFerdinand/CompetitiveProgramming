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
	int n;
	cin >> n;

	map<int,string> arr;
	arr[0]="Power";
	arr[1]="Time";
	arr[2]="Space";
	arr[3]="Soul";
	arr[4]="Reality";
	arr[5]="Mind";

	string s;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s=="purple")		arr[0]="false";
		else if(s=="green")	arr[1]="false";
		else if(s=="blue")	arr[2]="false";
		else if(s=="orange")arr[3]="false";
		else if(s=="red")	arr[4]="false";
		else				arr[5]="false";
	}

	int a=6-n,aa=0,i=0;
	cout << a << '\n';
	while(aa<a){
		if(arr[i]!="false"){
			cout << arr[i] << '\n';
			aa++;
		}	
		i++;
	}

}
