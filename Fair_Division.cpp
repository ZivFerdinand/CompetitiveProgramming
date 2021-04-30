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
	int q,n,arr[110];
	int one,two;
	cin >> q;

	while(q--){
		cin >> n;
		one=two=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			(arr[i]==1)?one++:two++;
		}

		if(one==0 && two%2!=0)
			cout << "NO\n";
		else if(one%2!=0 )
			cout << "NO\n";
		else
		cout << "YES\n";
	}
}
/*
())(()
*/
