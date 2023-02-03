#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);

	int a,b;
	cin >> a >> b;

	char temp;
	bool cont=true;

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >> temp;

			if(temp=='C' || temp=='M' || temp=='Y'){
				cont=false;
				cout << "#Color\n";
				break;
			}
		}

		if(!cont){
			break;
		}
	}

	if(cont){
		cout << "#Black&White\n";
	}
}
