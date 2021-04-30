#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		int rand=i+1;
		for(int j=i+1;j<n;j++){
			cout << ' ';
		}
		for(int j=0;j<=i;j++){
			if(j<i)
				cout << "**";
			else
				cout << '*';
		}
		cout << '\n';
	}
}

// n=5

// ####*
// ###***
// ##*****
// #*******
// *********
