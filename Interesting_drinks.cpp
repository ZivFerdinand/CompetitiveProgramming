#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <numeric>
using namespace std;

long long n, cost[100010], q;
long long costPerDay, highestValue;

int main(){	
	ios_base::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> cost[i];
		highestValue = max(highestValue, cost[i]);
	}

	sort(cost,cost+n);

	cin >> q;
	while(q--)
	{
		cin >> costPerDay;
		cout << upper_bound(cost,cost+n,costPerDay) - cost << endl;
	}
}
