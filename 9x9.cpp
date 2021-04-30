#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
using namespace std;

int main(){	
	ios_base::sync_with_stdio(0);
	int a,b;
	cin >> a >> b;

	(a>=10 || b>=10) ? cout << -1 << '\n' : cout << a*b << '\n';
}
