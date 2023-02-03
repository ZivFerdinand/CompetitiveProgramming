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
	
	int n,rand;
	cin >> n;

	rand=n;

	int max=0,min=10005,cnt=0;
	while(n--){
		int a;
		cin >> a;
		if(rand-1!=n){
			if(a>max || a<min){
				cnt++;
			}
		}

		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
	}

	cout << cnt << '\n';
}
