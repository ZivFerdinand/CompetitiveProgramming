#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
using namespace std;

int main(){
	int q;
	cin >> q;

	int a, b;
	while(q--)
	{
		cin >> a >> b;
		if(b>=a)
			swap(a, b);

		int xx;
		(a - b > 0) ? xx = 1 : xx = 0;
		
		cout << b * 2 + (-(xx) + (a - b) * 2);

		cout << '\n';
	}	
}
/*
0 1 2 3 4   = 5
0 1 2 3 4 5 = 6
*/