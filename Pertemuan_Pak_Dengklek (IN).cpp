#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <cstdio>
#include <sstream>
#define ll long long
#define ld long double
using namespace std;

int main(){
   	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);   cout.tie(NULL);
   	int n;
   	cin >> n;

   	string s[n+10];
   	for(int i=0;i<n;i++)
		cin >> s[i];
	sort(s,s+n);
	for(int i=1;i<=10;i++){
		for(int j=0;j<n;j++)
			if(s[j].size()==i)
				cout << s[j] << '\n';
	}


}
/* 



*/