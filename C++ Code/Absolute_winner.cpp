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
	
	int a,b,c,n;
	cin >> a >> b >> c;

	n=((a+b+c)/7);

	if(a/4==n || b/4==n || c/4==n){
		cout << "YA\n";
	}
	else{
		cout << "TIDAK\n";
	}
}
