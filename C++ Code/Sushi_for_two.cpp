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
	
	int arr[n+10],one=0,two=0,max_limit=0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
 
		if(i>0 && arr[i]!=arr[i-1] && one>0 && two>0)
		{
			if(min(one*2,two*2)>max_limit){
				max_limit=min(one*2,two*2);
			}
			(arr[i]==2)?two=0:one=0;
		}
		(arr[i]==1)?	one++:two++;
		
		if(i==n-1 && one!=0 && two!=0)
		{
			if(min(one*2,two*2)>max_limit){
				max_limit=min(one*2,two*2);
			}
			one=two=0;
		}
	}
 
	cout << max_limit << '\n';
}