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

string ent="\n";
string space=" ";
int main(){
   	ios_base::sync_with_stdio(false);
   	int n;
   	cin >> n;

   	string s;
   	cin >> s;

   	int zero,one;
   	zero=one=0;
   	for(int i=0;i<n;i++){
   		if(s[i]==48)	zero++;
   		else			one++;
   	}
   	if(one!=zero){
   		cout << 1 << ent+s+ent;
   	}
   	else{
   		int j=n-1;
   		string s_new;
   		for(int i=0;i<n;i++){
   			if(one!=zero){
   				j=i;
   				break;
   			}
   			s_new+=s[i];
   			if(s[i]==48)	zero--;
   			else			one--;
   		}
   		cout << 2 << ent+s_new+space;
   		for(int i=j;i<n;i++){
   			cout << s[i];
   		}
   		cout << ent;
   	}
}
/*


*/