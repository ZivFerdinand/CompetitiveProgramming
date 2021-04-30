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
	int q;
	cin >> q;

	ll w, h, n, cnt;
	while (q--) {
		cin >> w >> h >> n;
		cnt = 1;
		while (!(w % 2)) {
			w /= 2;
			cnt *= 2;
		}
		while (!(h % 2)) {
			h /= 2;
			cnt *= 2;
		}

		(cnt >= n) ? cout << "YES\n" : cout << "NO\n";
	}
}
/*
1x4
1x2 1x2
1x1 1x1 1x1 1x1
*/
