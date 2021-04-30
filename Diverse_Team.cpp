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
    int n,k;
    cin >> n >> k;

    bool used[200]={};
    int arr[n+10];

    int j=0,diff=0,x;
    for(int i=0;i<n;i++){
    	cin >> x;

    	if(!used[x]){
    		diff++;
    		used[x]=true;
    		arr[j]=i+1;
    		j++;
    	}
    }

    if(diff>=k){
    	cout << "YES\n";
    	for(int i=0;i<k;i++){
    		if(i<k-1){
    			cout << arr[i] << ' ';
    		}
    		else{
    			cout << arr[i] << '\n';
    		}
    	}
    	return 0;
    }

    cout << "NO\n";
}