#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <numeric>

#define ll long long

using namespace std;


int main(){	
	ios_base::sync_with_stdio(0);
	int q;
	cin >> q;

	int n;
	while(q--){
		cin >> n;

		if(n%2){
			for(int i=n;i>0;i--){
				if(i==(n+1)/2)
					cout << i-1;
				else if(i==((n+1)/2) - 1)
					cout << i+1;
				else
					cout << i;
				cout << ' ';
			}
		}
		else
			for(int i=n;i>0;i--)
				cout << i << ' ';

		cout << '\n';
	}
}
/*
5 4 3 2 1
5 4 2 3 1

1 2 3 4 5 6
6 5 4 3 2 1

*/
