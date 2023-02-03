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

string ent="\n";
int main(){
   	ios_base::sync_with_stdio(false);
   	int q;
   	cin >> q;

   	int n,x;
   	while(q--){
   		cin >> n;

   		int arr[n+10];
   		int max_limit=0;
   		for(int i=0;i<n;i++){
   			cin >> arr[i];
   		}
   		sort(arr,arr+n);
   		for(int i=0;i<n;i++){
   			max_limit=max(max_limit,min(arr[i],n-(i)));
   		}
   		cout << max_limit << ent;
   	}
}
/*
1 3 4 4 5

1 1 5 5 5


*/