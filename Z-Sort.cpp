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

 	ll arr[n+10],arr2[n+10];
 	for(int i=0;i<n;i++){
 		cin >> arr[i];
 		arr2[i]=arr[i];
 	}

 	sort(arr2,arr2+n);

 	int x=n-1;
 	for(int i=1;i<n;i+=2){
 		arr[i]=arr2[x];
 		x--;
 	}
 	x=0;
 	for(int i=0;i<n;i+=2){
 		arr[i]=arr2[x];
 		x++;
 	}

 	for(int i=0;i<n;i++){
		cout << arr[i] << ' '; 		
 	}
 	cout << '\n';
}
