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
	int n,diagonal;	char x;
	cin >> n >> x >> diagonal;


	int change=1;
		
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==change || j==n-change+1)
				(j<n) ? cout << diagonal : cout << diagonal << '\n' ;
			else
				(j<n) ? cout << x : cout << x << '\n' ;
					
		}
		
		if(n%2==0)
			if(change<=n/2 && i<=n/2)	++change;
			else if(change==(n/2)+1 && i==(n/2)+1) change-=2;
			else						--change;
			
		else
			if(change<=n/2 && i<=n/2)	++change;
			else						--change;
	}
}


