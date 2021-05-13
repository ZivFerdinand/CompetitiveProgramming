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
	string s;
	cin >> s;
	
	bool found = true;
	for (int i = 0;i < s.size();i++) {
		if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
		{
			i += 2; continue;
		}
		else if (s[i] == '1' && s[i + 1] == '4') {
			i++;
			continue;
		}
		else if (s[i] == '1')
			continue;
		else {
			found = false;
			break;
		}
	}
	(found) ? cout << "YES\n":cout << "NO\n";
}
/*
* 114114
* 14144
*/
