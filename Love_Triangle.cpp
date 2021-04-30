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

 	int arr[10000];
 	for(int i=1;i<=n;i++){
 		cin >> arr[i];
 	}
 	int cnt=0;
 	for(int i=1;i<=n;i++){
 		if(arr[arr[arr[arr[i]]]]==arr[i]){
 			cnt++;
 		}
 		if(cnt>0){
 			cout << "YES\n";
 			return 0;
 		}
 	}
 	cout << "NO\n";
 	return 0;
}