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
	long double n;
	cin >> n;

	if(n!=trunc(n) || n<0 || n>100){
		cout << "TIDAK\n";
	}
	else{
		cout << "YA\n";
	}
}
