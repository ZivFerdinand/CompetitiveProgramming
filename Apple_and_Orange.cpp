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
	int start,end,loc_apple,loc_orange,m,n,x,cnt=0;
	cin >> start >> end >> loc_apple >> loc_orange >> m >> n;

	for(int i=0;i<m;i++){
		cin >> x;
		if(loc_apple+x>=start && loc_apple+x<=end)	cnt++;
	}
	
	cout << cnt << ' ';
	cnt=0;
	
	for(int i=0;i<n;i++){
		cin >> x;
		if(loc_orange+x>=start && loc_orange+x<=end)cnt++;
	}

	cout << cnt << '\n';
}
