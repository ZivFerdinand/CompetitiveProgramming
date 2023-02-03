#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
 	int n;
 	cin >> n;

 	int arr[n+10];
 	int allsum=0;
 	for(int i=0;i<n;i++){
 		cin >> arr[i];
 		allsum+=arr[i];
 	}

 	sort(arr,arr+n);
 	int mymoney=0,pos;

 	for(int i=n-1;i>=0;i--){
 		mymoney+=arr[i];
 		
 		if(allsum-mymoney<mymoney){
 			pos=i;
 			break;
 		}
 	}

 	cout << n-pos << '\n';
}
