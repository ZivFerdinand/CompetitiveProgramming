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
	int x1,v1,x2,v2;
	cin >> x1 >> v1 >> x2 >> v2;

	int rand=x1,rand2=x2;
	x1=min(rand,rand2);	x2=max(rand,rand2);

	if(x1!=rand)	swap(v1,v2);

	bool done=false;
	while(x1!=x2 && x1<x2){
		x1+=v1;	x2+=v2;
	}
	
	if(x1==x2){
		cout << "YES\n";
		done=true;
	}
	if(!done)	cout << "NO\n";
}
