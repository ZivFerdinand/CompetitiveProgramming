#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);

	ll n,k,rand;
	cin >> n >> k;

	ll red_sheets = 2*n;	rand=red_sheets;
	red_sheets/=k;
	if(rand%k!=0){
		red_sheets++;
	}


	ll green_sheets = 5*n;	rand=green_sheets;
	green_sheets/=k;
	if(rand%k!=0){
		green_sheets++;
	}


	ll blue_sheets = 8*n;	rand=blue_sheets;
	blue_sheets/=k;
	if(rand%k!=0){
		blue_sheets++;
	}

	cout << (blue_sheets+green_sheets+red_sheets) << '\n';
}
