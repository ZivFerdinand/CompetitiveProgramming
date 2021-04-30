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
	int n,k;
	cin >> n >> k;

	int time_left=240-k;	int total=0;
	for(int i=1;i<=15;i++){
		total+=5*i;
		if(total>time_left){
			cout << min(n,i-1) << '\n';
			break;
		}
	}
}
