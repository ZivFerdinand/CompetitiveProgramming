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

	int x[210], y[210];
	for (int i = 0;i < n;i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0;i < n;i++) {
		bool right, left, up, down, found;
		right = left = up = down = found = false;

		for (int j = 0;j < n;j++) {
			if (j != i)
			{
				if (x[i] == x[j] && y[i] < y[j])
					down = true;
				if (x[i] == x[j] && y[i] > y[j])
					up = true;
				if (x[i] < x[j] && y[i] == y[j])
					left = true;
				if (x[i] > x[j] && y[i] == y[j])
					right = true;

				if (down == true && up == true && right == true && left == true)
				{
					found = true;
					break;
				}
			}
		}

		if (found)cnt++;
	}
	cout << cnt << '\n';
}
/*
* 
*/
