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

    if(n%2){
    	cout << -1 << '\n';
    }
    else{
    	int arr[n+10];
    	for(int i=1;i<=n;i++){
    		arr[i]=i;
    	}
    	for(int i=1;i<=n;i+=2){
    		swap(arr[i],arr[i+1]);
    	}
    	for(int i=1;i<=n;i++){
    		cout << arr[i];
    		if(i<n)	cout << ' ';
    		else	cout << '\n';
    	}
    }
}