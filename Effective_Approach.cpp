#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int arr[100010];
int loc[100010];

int main() {
	int n, m;
	ll vasya = 0, petya = 0;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		loc[arr[i]] = i;
	}

	cin >> m;
	int x;
	while (m--) {
		cin >> x;
		vasya += loc[x] + 1;
		petya += n - loc[x];
	}

	cout << vasya << ' ' << petya;
}
/*
* 
*/
