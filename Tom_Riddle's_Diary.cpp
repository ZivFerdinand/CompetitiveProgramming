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
	int n;
	cin >> n;

	map<string,bool> name;
	string s;
	while(n--){
		cin >> s;
		if(!name[s]){
			cout << "NO\n";
			name[s]=true;
		}
		else{
			cout << "YES\n";
		}
	}	
}
