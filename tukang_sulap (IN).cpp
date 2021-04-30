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
	int n;
	cin >> n;

	ll A[n+10];
	ll B[n+10];
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	for(int i=0;i<n;i++){
		cin >> B[i];
	}

	int q;
	cin >> q;

	while(q--){
		char P,Q;	int x,y;
		cin >> P >> x >> Q >> y;	x-=1;	y-=1;

		if(P=='A'){
			if(Q=='B'){
				swap(A[x],B[y]);
			}
			else{
				swap(A[x],A[y]);
			}
		}
		else{
			if(Q=='B'){
				swap(B[x],B[y]);
			}
			else{
				swap(B[x],A[y]);
			}
		}
	}

	for(int i=0;i<n;i++){
		if(i<n-1){
			cout << A[i] << ' ';
		}
		else{
			cout << A[i] << '\n';
		}
	}
	for(int i=0;i<n;i++){
		if(i<n-1){
			cout << B[i] << ' ';
		}
		else{
			cout << B[i] << '\n';
		}
	}
}
