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
	
	int n,limit;
	cin >> n >> limit;

	bool used[limit+5];
	memset(used,false,sizeof used);

	int a,b,cnt=0;
	for(int i=0;i<n;i++){
		cin >> a >> b;

		for(int j=a;j<=b;j++){
			if(used[j]==0){
				cnt++;
			}
			used[j]=true;
		}
	}

	cout << limit-cnt;
	if(limit-cnt){
		cout << '\n';
	}
	for(int i=1;i<=limit;i++){
		if(!used[i]){
			cout << i << ' ';
		}
	}

	cout << '\n';
}
