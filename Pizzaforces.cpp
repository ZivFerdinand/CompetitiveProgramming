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

	ll a;
	while(q--)
	{
		cin >> a;

		if(a<=6)
		{
			cout << 15;
		}
		else
		{
			if(a%2)
				a++;

			cout << (a * 5) / 2;
		}
		cout << '\n';
	}	
}
/*
0 1 2 3 4   = 5
0 1 2 3 4 5 = 6
*/