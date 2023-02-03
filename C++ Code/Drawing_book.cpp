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
	int n,k;
	cin >> n >> k;

	int x;
	if(k%2==0)	x=(n-k)/2;
	else		x=(n-(k-1))/2;

	cout << min((k/2),x) << '\n';
}