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
	string arr[]={"Sunny","Cloudy","Rainy"};
	
	string s;
	cin >> s;

	for(int i=0;i<3;i++){
		if(s==arr[i]){
			if(i==2){
				cout << arr[0] << '\n';
			}
			else{
				cout << arr[i+1] << '\n';
			}
		}
	}
}
