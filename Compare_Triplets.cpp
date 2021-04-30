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
	int a[5],b[5];
	for(int i=0;i<3;i++)	cin >> a[i];
	for(int i=0;i<3;i++)	cin >> b[i];

	int A,B;	A=B=0;
	for(int i=0;i<3;i++){
		if(a[i]>b[i])	A++;
		if(a[i]<b[i])	B++;
	}

	cout << A << ' ' << B << '\n';
}