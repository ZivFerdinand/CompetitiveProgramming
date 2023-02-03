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
	string a,b;
	cin >> a >> b;

	int a_len=a.size();
	int b_len=b.size();
	bool used_b[b_len+5];

	memset(used_b,0,sizeof used_b);

	int cnt=0;
	for(int i=0;i<a_len;i++){
		for(int j=0;j<b_len;j++){
			if(!used_b[j]){
				if(a[i]==b[j]){
					cnt++;
					used_b[j]=1;
					break;
				}
			}
		}
	}

	cout << (a_len-cnt)+(b_len-cnt) << '\n';
}