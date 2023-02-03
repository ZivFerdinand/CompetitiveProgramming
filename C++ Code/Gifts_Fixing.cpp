#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

ll min(ll a, ll b) {
	if (a < b) return a;
	else return b;
}

int main() {
	int q;
	cin >> q;

	ll arr[100], arr2[100], cnt, n, aMin, bMin, x;
	while (q--) {
		cin >> n;
		cnt = 0;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			if (!i)
				aMin = arr[i] + 2;
			aMin = min(aMin, arr[i]);
		}
		for (int i = 0;i < n;i++) {
			cin >> arr2[i];
			if (!i)
				bMin = arr2[i] + 2;
			bMin = min(bMin, arr2[i]);
		}
		for (int i = 0;i < n;i++) {
			x = min(arr[i] - aMin, arr2[i] - bMin);
			cnt += x;
			arr[i] -= x;
			arr2[i] -= x;
			if (arr[i] > aMin)
				cnt += arr[i] - aMin, arr[i] = aMin;
			if (arr2[i] > bMin)
				cnt += arr2[i] - bMin, arr2[i] = bMin;
		}
		cout << cnt << '\n';
	}
}
/*
1 2
3 2
3 5
*/
