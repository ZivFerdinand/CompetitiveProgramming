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

	int a, b, n, cnt;
	while (q--) {
		cin >> a >> b >> n;
		cnt = 0;
		while (a <= n && b <= n) {
			cnt++;
			(a <= b) ? a += b : b += a;
		}
		cout << cnt << '\n';
	}
}
/*
1 2
3 2
3 5
*/
