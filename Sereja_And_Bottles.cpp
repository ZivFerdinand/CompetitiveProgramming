#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main() {
	int n, a[200], b[200], cnt = 0, myData[2000] = { 0 };
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a[i] >> b[i];
		myData[b[i]]++;
	}

	for (int i = 0;i < n;i++) {
		myData[b[i]]--;
		if (!myData[a[i]]) {
			cnt++;
		}
		myData[b[i]]++;
	}
	cout << cnt << '\n';
}
/*
* 
*/
