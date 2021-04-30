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
   	bool available[1500]={};
   	int arr[55];	
   	int arr2[55];

   	int n;
   	cin >> n;

   	int i=0,x;
   	for(int j=0;j<n;j++){
   		cin >> arr2[j];
   	}
   	for(int j=n-1;j>=0;j--){
   		if(!available[arr2[j]]){
   			available[arr2[j]]=true;
   			arr[i++]=arr2[j];
   		}
   	}

   	cout << i << '\n';
   	for(int j=i-1;j>=0;j--){
   		cout << arr[j] << ' ';
   	}
   	cout << '\n';
}