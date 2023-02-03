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
	int q;
	cin >> q;

	string s;
	while(q--){
		cin >> s;
		int s_len=s.size();

		if(s[s_len-1]=='u')			cout << "JAPANESE\n";
		else if(s[s_len-1]=='o')	cout << "FILIPINO\n";
		else						cout << "KOREAN\n";
	}
}
