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
	int n,m;
	cin >> n >> m;

	int arr[n+10];
	bool available[20];

	memset(available,0,sizeof available);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int x;
	for(int i=0;i<m;i++){
		cin >> x;
		available[x]=true;
	}

	int out=0;
	for(int i=0;i<n;i++){
		if(available[arr[i]]==true){
			out++;
			cout << arr[i] << ' ';
		}
	}

	cout << '\n';
}
