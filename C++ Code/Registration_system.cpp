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
	int n;
	cin >> n;

	map<string,int> used;
	string str;
	while(n--){
		cin >> str;

		if(used[str]){
			cout << str << used[str] << '\n';
		}
		else	cout << "OK\n";

		used[str]++;
	}
}
