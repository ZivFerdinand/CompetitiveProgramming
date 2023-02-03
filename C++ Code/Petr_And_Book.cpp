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
	int n, cnt = 0;
	cin >> n;

	int days[10];
	for (int i = 0;i < 7;i++) {
		cin >> days[i];
	}
	for (int i = 0;i < 7;i++) {
		cnt += days[i];
		if (cnt >= n) {
			cout << i + 1;
			return 0;
		}


		if (cnt < n && i == 7 - 1)
			i = -1;
	}
}
/*
* 
*/
