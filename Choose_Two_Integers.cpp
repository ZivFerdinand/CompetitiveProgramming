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

 	int arr[n+10];
 	for(int i=0;i<n;i++){
 		cin >> arr[i];
 	}

 	int m;
 	cin >> m;

 	int arr2[m+10];
 	for(int i=0;i<m;i++){
 		cin >> arr2[i];
 	}

 	sort(arr,arr+n);
 	sort(arr2,arr2+m);

 	cout << arr[n-1] << ' ' << arr2[m-1] << '\n';
}
