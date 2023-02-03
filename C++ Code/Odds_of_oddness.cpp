#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
int main(){	
	ios_base::sync_with_stdio(0);
	double a;
	cin >> a;
	
	int rand = a/2;
	
	int odd = a-rand;
	double x=odd/a;
	
	cout << fixed << setprecision(10) << odd/a << '\n';
}
