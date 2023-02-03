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

	int n, x, a, odd, even;
	while (q--) {
		cin >> n >> x;
		odd = even = 0;
		for (int i = 0;i < n;i++) {
			cin >> a;
			(a % 2) ? odd++ : even++;
		}

		if (x == n && (odd % 2 == 0)) {
			cout << "No\n";
		}
		else if ((x % 2 == 0) && odd == n) {
			cout << "No\n";
		}
		else if (odd == 0) {
			cout << "No\n";
		}
		else {
			cout << "Yes\n";
		}
	}
}
/*
x=6
odd 3 even 5
*/
