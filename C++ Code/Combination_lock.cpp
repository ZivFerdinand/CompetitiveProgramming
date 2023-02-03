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

 	string s,s1;
 	cin >> s >> s1;

 	int moves=0;

 	for(int i=0;i<n;i++){
 		int a = (int)s[i] - 48;
 		int b = (int)s1[i] - 48;

 		moves += min(abs(a-b),10-abs(a-b));
 	}

 	cout << moves << '\n';
}