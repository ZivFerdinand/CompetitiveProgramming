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
	cin >> n;

	int arr[n+11];
	int x=1,rand;
	for(int i=0;i<n;i++){
		cin >> rand;
		if(!i){
			arr[x]=rand;
			x++;
		}
		else if(rand!=arr[x-1]){
			arr[x]=rand;
			x++;
		}
	}
	
	cin >> n;
	while(n--){
		cin >> rand;
		
		if(rand<arr[x-1]){
			cout << x << '\n';
		}
		else{
			int l=1,r=x-1;
			while(l<=r){
				int mid=(l+r)/2;
				if((arr[mid]<=rand && arr[mid-1]>rand) || (arr[mid]<=rand && mid==1)){
					cout << mid << '\n';
					break;
				}
				else if(arr[mid]<rand){
					r=mid-1;
				}
				else if(arr[mid]>rand){
					l=mid+1;
				}
			}
		}
	}
}