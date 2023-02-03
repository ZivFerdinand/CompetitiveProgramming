#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#define ll long long

using namespace std;


int main(){	
	int n,t;
	cin >> n >> t;

	
	if(n==1 && t==10)
		cout << -1;
	else
		for(int i=0;i<n;i++){
			if(!i && t==10)
				cout << 1;
			else if(!i)
				cout << t;
			else
				cout << 0;
		}
		cout << endl;
}
/*

*/
