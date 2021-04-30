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
	int q;
	cin >> q;

	int n=q;
	int a,b;
	while(q--){
		cin >> a >> b;

		int limit=0;
		int arr[a+5],arr2[b+5];
		for(int i=0;i<a;i++){
			cin >> arr[i];	if(arr[i]>limit)	limit=arr[i];
		}
		for(int i=0;i<b;i++){
			cin >> arr2[i];	if(arr2[i]>limit)	limit=arr2[i];
		}

		limit++;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(abs(arr[i]-arr2[j])<limit){
					limit = abs(arr[i]-arr2[j]);
				}
			}
		}

		cout << "Kasus #" << n-q << ": ";
		cout << limit << '\n';
	}	
}