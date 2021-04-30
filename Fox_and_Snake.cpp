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
	int n,m;
	cin >> n >> m;

	int cnt=0;

	for(int i=0;i<n;i++){
		if(i%2==1){
			cnt++;
		}
		if(i%2==0){
			for(int j=0;j<m;j++){
				cout << '#';
			}		
			cout << '\n';
		}
		else{
			if(cnt%2==0){
				cout << '#';
			}
			for(int j=0;j<m-1;j++){
				cout << '.';
			}
			if(cnt%2!=0){
				cout << '#';
			}
			cout << '\n';
		}
	}
}
