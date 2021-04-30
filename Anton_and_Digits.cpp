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
bool used_a,used_b,used_c;

int minimum(int a,int b,int c){
	if(a<=b && a<=c){
		used_a=true;
		return a;
	}
	else if(b<=a && b<=c){
		used_b=true;
		return b;
	}
	else{
		used_c=true;
		return c;
	}
}

int main(){
    ios_base::sync_with_stdio(false);
	used_a=used_b=used_c=false;
	ll total=0;
	ll k2,k3,k5,k6;
	cin >> k2 >> k3 >> k5 >> k6;

	total+=256*minimum(k2,k5,k6);
	if(used_a){
		k5-=k2;	k6-=k2;	k2=0;
	}
	else if(used_b){
		k2-=k5;	k6-=k5;	k5=0;
	}
	else{
		k2-=k6;	k5-=k6;	k6=0;
	}

	total+=32*min(k2,k3);

	cout << total << '\n';
}
