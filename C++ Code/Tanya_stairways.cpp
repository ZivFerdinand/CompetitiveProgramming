#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
 	
 	int n;
 	cin >> n;

 	int a[1010];
 	int arr[1010];
 	int cnt=0;

 	for(int i=0;i<n;i++){
 		cin >> a[i];

 		if(i==n-1){
 			if(a[i]<=a[i-1] && i-1>=0){
 				arr[cnt]=a[i-1];
 				cnt++;
 			}

 			arr[cnt]=a[i];
 			cnt++;
 		}
 		else if(i>0){
 			if(a[i]<=a[i-1]){
 				arr[cnt]=a[i-1];
 				cnt++;
 			}
 		}
 	}

 	cout << cnt << endl;
 	for(int i=0;i<cnt;i++){
 		if(i<cnt-1){
 			cout << arr[i] << ' ';	
		}
		else{
			cout << arr[i] << endl;
		}
 	}
}
