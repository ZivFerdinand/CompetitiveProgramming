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
   	string s,t;
   	cin >> s >> t;

   	int loc=0;
   	int s_len=s.size(),t_len=t.size();
   	for(int i=0;i<t_len;i++){
   		if(t[i]==s[loc]){
   			loc++;
   		}
   	}
   	cout << ++loc << '\n';
}