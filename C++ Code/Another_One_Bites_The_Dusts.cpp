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
	ll a,b,ab;
	cin >> a >> b >> ab;

	ll length=(ab*2)+(min(a,b)*2);
	if(a!=b)	length++;
	
	cout << length << '\n';
}
