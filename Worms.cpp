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

int main() {
	arr[0] = 1;
	int n, m, q;
	cin >> n;

	for (int i = 1;i <= n;i++) {
		cin >> arr[i];
		if (i > 1) {
			arr[i] = arr[i] + arr[i - 1];
		}
	}

	cin >> m;
	while (m--) {
		cin >> q;
		int indexFound = lower_bound(arr, arr + n, q) - arr;
		if (indexFound == 0)
			indexFound++;
		cout << indexFound << '\n';
	}
}
/*
2 1-2
7 3-9
3 10-12
4 13-16
9 17-25
*/
