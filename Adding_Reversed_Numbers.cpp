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
    ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	while(n--){
		ll a,b;
		cin >> a >> b;

		string s1=to_string(a);
		string s2=to_string(b);

		string s1_new=s1,s2_new=s2;
		for(int i=0;i<s1.size();i++){
			s1[i]=s1_new[s1.size()-i-1];
		}
		for(int i=0;i<s2.size();i++){
			s2[i]=s2_new[s2.size()-i-1];
		}

		a=stoi(s1);b=stoi(s2);
		s1=s1_new=to_string(a+b);

		for(int i=0;i<s1.size();i++){
			s1[i]=s1_new[s1.size()-i-1];
		}

		a=stoi(s1);
		cout << a << '\n';
	}	
}