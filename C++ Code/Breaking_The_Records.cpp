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

	int x,max_limit,min_limit;
	int first=n;
	int max=0,min=0;
	while(n--){
		cin >> x;

		if(n==first-1){
			max_limit=x;
			min_limit=x;
		}
		if(x>max_limit){
			max_limit=x;
			max++;
		}
		if(x<min_limit){
			min_limit=x;
			min++;
		}
	}

	cout << max << ' ' << min << '\n';
}
