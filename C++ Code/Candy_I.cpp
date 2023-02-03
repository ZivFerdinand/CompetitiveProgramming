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
	while(cin >> n){
		if(n==-1)	return 0;


		int arr[n+10],total=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			total+=arr[i];
		}

		if(total%n!=0)	cout << -1 << '\n';
		else{
			total/=n;
			int moves=0;
			for(int i=0;i<n;i++){
				if(arr[i]>=total){
					moves+=abs(total-arr[i]);
				}
			}
			cout << moves << '\n';
		}
	}
}
