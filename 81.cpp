#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
using namespace std;

int main(){	
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;	

	bool cont=1;
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(i*j==n){
				cont=0;
				break;
			}
		}
	}
	
	if(!cont){
		cout << "Yes\n";
	}
	else	cout << "No\n";
}
