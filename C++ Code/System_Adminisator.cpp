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
	int q;
	cin >> q;

	int ping,arrived,not_arrived;
	ll total_a,total_b,total_arrived_a,total_arrived_b;
	total_a=total_b=total_arrived_a=total_arrived_b=0;

	while(q--){
		cin >> ping >> arrived >> not_arrived;
		if(ping==1){
			total_a+=arrived+not_arrived;
			total_arrived_a+=arrived;
		}
		else{
			total_b+=arrived+not_arrived;
			total_arrived_b+=arrived;
		}
	}

	if(total_arrived_a>=total_a/2){
		cout << "LIVE\n";
	}
	else	cout << "DEAD\n";

	if(total_arrived_b>=total_b/2){
		cout << "LIVE\n";
	}
	else	cout << "DEAD\n";
}
