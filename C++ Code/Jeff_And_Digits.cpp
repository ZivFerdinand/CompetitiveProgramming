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

	int x;
	int zero=0, five=0;
	while (n--) {
		cin >> x;
		(x == 0) ? zero++ : five++;
	}
	if(five > 0)
		five /= 9, five *= 9;

	if (zero >= 1) {
		for (int i = 0;i < five;i++)
			cout << 5;
		if (five > 0)
			for (int i = 0;i < zero;i++)
				cout << 0;
		else
			cout << 0;
	}
	else
		cout << -1;
}
/*
* 
*/
