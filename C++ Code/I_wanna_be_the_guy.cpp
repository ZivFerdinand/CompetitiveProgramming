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

	int n,temp;
	cin >> n;

	bool used[200];
	memset(used,false,sizeof used);

	int a,b,cnt=0;
	
	cin >> a;

	while(a--){
		cin >> temp;

		if(!used[temp]){
			used[temp]=1;
			cnt++;
		}
	}

	cin >> b;

	while(b--){
		cin >> temp;

		if(!used[temp]){
			used[temp]=1;
			cnt++;
		}
	}

	if(cnt>=n){
		cout << "I become the guy.\n";
	}
	else{
		cout << "Oh, my keyboard!\n";	
	}
}
