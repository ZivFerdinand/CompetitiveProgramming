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
	int n,k,x;
	cin >> n >> k;

	int total=0;
	for(int i=0;i<n;i++){
		cin >> x;
		if(i!=k){
			total+=x;
		}
	}

	int b;	cin >> b;

	if(b==total/2)		cout << "Bon Appetit\n";
	else				cout << b-(total/2) << '\n';

}