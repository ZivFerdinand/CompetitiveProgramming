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

   	int arr[n+10];
   	int j=0,cnt=0;
   	bool cant=0;
   	for(int i=0;i<n;i++){
   		cin >> arr[i];
   		if(arr[i]<=k && cant==false){
   			j=i;
   			cnt++;
   		}
   		if(arr[i]>k){
   			cant=true;
   		}
   	}
   	for(int i=n-1;i>j;i--){
   		if(arr[i]>k){
   			break;
   		}
   		else{
   			cnt++;
   		}
   	}
   	cout << cnt << '\n';
}	 