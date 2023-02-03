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
	int l,r,n;
	cin >> l >> r >> n;

	int cnt=0;
	for(int i=l;i<=r;i++){
		int l_reverse;
		string s_old=to_string(i),s_new=s_old;
		
		int rand=0;
		for(int j=s_old.size()-1;j>=0;j--){
			s_new[j]=s_old[rand];
			rand++;
		}
		stringstream x(s_new);
		x >> l_reverse;

		if(abs(l_reverse-i)%n==0)	cnt++;
	}

	cout << cnt << '\n';
}
