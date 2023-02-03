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
		if (n < k) {
			cout << "NO\n";
		}
		else {
			bool a = false;
			bool one = false;
			if ((n - (k - 1)) % 2) {
				cout << "YES\n";
				a = one = true;
			}
			else if ((n - ((k - 1) * 2)) > 0 && !((n - ((k - 1) * 2)) % 2)) {
				cout << "YES\n";
				a = true;
			}
			else
				cout << "NO\n";

			if (a) {
				for (int i = 0;i < k - 1;i++) {
					if (one)
						cout << 1 << " ";
					else
						cout << 2 << " ";
				}
				if (one)
					cout << n - (k - 1) << '\n';
				else
					cout << (n - ((k - 1) * 2)) << '\n';
			}
		}
	}
}
/*
* 100 4
* 1 1 1 95
*/
