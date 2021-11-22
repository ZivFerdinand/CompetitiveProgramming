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

int main()
{
    int t;
	cin >> t;

    ll arr[300010];
    while (t--) {
		int n;
		cin >> n;
		ll maxx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
			maxx = max(maxx, arr[i]);
        }

        int ans = -1;
		for (int i = 0; i < n; ++i) {
			if (arr[i] != maxx) 
                continue;
			if ((i > 0 && arr[i - 1] != maxx) || (i < n - 1 && arr[i + 1] != maxx))
                ans = i + 1;
		}
		cout << ans << endl;
	}
}
/*
aabbbabaa
*/