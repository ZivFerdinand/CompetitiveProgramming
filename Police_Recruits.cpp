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

	int untreated=0,hired=0,x;
	while(n--){
		cin >> x;
		(x>0)?hired+=x:untreated+=x;

		if(hired>0 && untreated<0 && x<0){
			untreated++;
			hired--;
		}
	}

	cout << abs(untreated) << '\n';
}
