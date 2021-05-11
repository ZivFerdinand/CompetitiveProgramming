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
	int n;
	cin >> n;
	
	int arr[110], minn = 1010, indLeft, indRight;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		if (i) {
			if (abs(arr[i] - arr[i - 1]) < minn) {
				minn = abs(arr[i] - arr[i - 1]);
				indLeft = i;
				indRight = i + 1;
			}
			if (i == n - 1) {
				if (abs(arr[n - 1] - arr[0]) < minn) {
					minn = abs(arr[n-1] - arr[0]);
					indLeft = n;
					indRight = 1;
				}
			}
		}
	}
	cout << indLeft << ' ' << indRight;
}
/*
* 
*/
