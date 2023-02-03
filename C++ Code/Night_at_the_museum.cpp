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
 	string s;
 	cin >> s;

 	int s_len=s.size();
 	char loc;
 	int cnt=0;
 	for(int i=0;i<s_len;i++){
 		if(i==0){
 			cnt+=min(26-(abs((int)s[i]-97)),abs((int)s[i]-97));
 			loc=s[i];
 		}
 		else{
 			cnt+=min(26-(abs((int)s[i]-loc)),abs((int)s[i]-loc));
 			loc=s[i];
 		}
 	}
 	cout << cnt << '\n';
}
