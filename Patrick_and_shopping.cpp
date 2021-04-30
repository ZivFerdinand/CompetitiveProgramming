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
	ll d1,d2,d3;
	cin >> d1 >> d2 >> d3;

	ll total=0;
	bool d11=0,d22=0;
	if(d1<d2){
		total+=d1;
		d11=true;
	}
	else{
		total+=d2;
		d22=true;
	}

	if(d1+d2<d3){
		total+=d1+d2;
		d1d2=true;
	}
	else{
		total+=d3;
	}
	
	if(d22){
		if(d1<d3+d2){
			total+=d1;
		}
		else{
			total+=d3+d2;
		}
	}
	else{
		if(d2<d3+d1){
			total+=d2;
		}
		else{
			total+=d3+d1;
		}
	}

	cout << total << '\n';
}
