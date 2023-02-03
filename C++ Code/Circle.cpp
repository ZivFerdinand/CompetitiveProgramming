#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

// REF: https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.geogebra.org%2Fm%2Fhz4rzhqv&psig=AOvVaw16uQ3RDyTbyTfTl1UQfuyC&ust=1618296151312000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCPiVvZGa-O8CFQAAAAAdAAAAABAN

int main() {
	int n;
	cin >> n;
	for (int i = (n / 2) - 1;i >= 0;i -= 2) {
		int a = n - (2 * floor(sqrt(pow(n / 2, 2) - pow(i, 2))));
		a /= 2;
		for (int j = 0;j < a;j++)
			cout << ' ';
		for (int j = 0;j < (n - a) - (n / 2);j++)
			cout << "* ";
		cout << '\n';
	}
	for (int i = 0;i < n / 2;i += 2) {
		int a = n - (2 * floor(sqrt(pow(n / 2, 2) - pow(i, 2))));
		a /= 2;
		for (int j = 0;j < a;j++)
			cout << ' ';
		for (int j = 0;j < (n - a) - (n / 2);j++)
			cout << "* ";
		cout << '\n';
	}
}
/*
* r awal = n cm
*/
