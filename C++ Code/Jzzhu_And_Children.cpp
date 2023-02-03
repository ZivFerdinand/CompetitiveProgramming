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
	double n, m, x;
	cin >> n >> m;

	double maxx = 0, indexx;
	for (int i = 0;i < n;i++) {
		cin >> x;
		if (ceil(x/m) >= maxx) {
			maxx = ceil(x/m);
			indexx = i + 1;
		}
	}
	cout << indexx;
}
/*
* 
*/
