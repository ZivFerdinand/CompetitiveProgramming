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

	int arr[n+10];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int d,m;
	cin >> d >> m;

	int cnt=0;
	if(m>n){
		cnt=0;
	}
	else{
		for(int i=0;i<n;i++){
			int total=0;
			for(int j=i;j<m+i && j<n;j++){
				total+=arr[j];
			}

			if(total==d)	cnt++;
		}
	}

	cout << cnt << '\n';
}
