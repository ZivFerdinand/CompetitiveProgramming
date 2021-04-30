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
	ios_base::sync_with_stdio(false);


	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	
	string rand;
	rand.clear();

	int s_len=s.length();
	int j=0;
	bool cont=1;
	
	for(int i=s_len-1;i>=0;i-- && j++){
		if(s[i]!=s1[j]){
			cont=0;
			cout << "NO\n";
			break;
		}

	}

	if(cont){
		cout << "YES\n";
	}
}
