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
	
	if(n%2)
		for(int i=1;i<=n;i++){
			cout << '*';
			for(int j=1;j<=n-2;j++){
				if(i==(n/2)+1)
					cout << '*';
				else
					cout << ' ';
			}
			cout << "*\n";
		}
	else
		for(int i=1;i<=n;i++){
			cout << '*';
			for(int j=1;j<=n-2;j++){
				if(i==(n/2)+1 || i==n/2)
					cout << '*';
				else
					cout << ' ';
			}
			cout << "*\n";
		}	
}
