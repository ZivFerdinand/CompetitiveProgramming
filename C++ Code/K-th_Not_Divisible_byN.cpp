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

	ll n, k;
	while (q--) {
		cin >> n >> k;
		int xx = k % (n - 1);
		if (xx == 0) xx++;
		else xx = 0;
		cout << k + (k / (n - 1)) - (xx) << '\n';
	}
}
/*
2 1-2
7 3-9
3 10-12
4 13-16
9 17-25
*/
