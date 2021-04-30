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
	int n,loc;
	int a;
	bool done=0;	int total=1;
	
	cin >> n >> loc;
	for(int i=1;i<=n-1;i++){
		cin >> a;

		if(i==total || total==1){
			total+=a;
		}
		if(total==loc){
			done=1;	break;
		}
		else if(total>loc)	break;
	}

	if(done)	cout << "YES\n";
	else		cout << "NO\n";
}