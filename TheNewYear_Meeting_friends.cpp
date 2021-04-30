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
	int a,b,c;
	cin >> a >> b >> c;
	
	int limit=350;
	
	for(int i=1;i<=100;i++){
		if(abs(i-a)+abs(i-b)+abs(i-c)<limit){
			limit=abs(i-a)+abs(i-b)+abs(i-c);
		}
	}
	
	cout << limit << '\n';
}
