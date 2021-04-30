#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	long double x,total=0;
	while(n--){
		cin >> x;

		total+=1/x;
	}	

	cout << fixed << setprecision(14) << 1/total << endl;
}
