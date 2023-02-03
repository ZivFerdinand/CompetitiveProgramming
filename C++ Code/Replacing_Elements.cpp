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

	int n, d, arr[110];
	while (q--) {
		cin >> n >> d;
		bool check = true;
		for (int i = 0;i < n;i++) {
			cin >> arr[i];
			if (arr[i] > d)
				check = false;
		}
		sort(arr, arr + n);
		
			if ((arr[0] + arr[1]) <= d || (check == true)) {
				cout << "YEs\n";
			}
			else
				cout << "NO\n";
		
	}
}
/*
* r awal = n cm
*/
