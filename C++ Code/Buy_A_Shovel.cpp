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
	int k,r;
	cin >> k >> r;

	int j=1;
	while((j*k)%10 && ((j*k)-r)%10){
		j++;
	}
	cout << j << '\n';
}
