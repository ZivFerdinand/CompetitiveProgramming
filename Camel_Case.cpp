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
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;

	int s_len=s.size(),cnt=1;
	for(int i=0;i<s_len;i++){
		if(s[i]>=65 && s[i]<=90)	cnt++;
	}

	cout << cnt  << '\n';
}
