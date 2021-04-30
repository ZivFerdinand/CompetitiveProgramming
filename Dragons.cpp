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

void sort_based_on_one(int a[],int b[],int n){
	pair<int,int> pairsort[n];

	for(int i=0;i<n;i++){
		pairsort[i].first=a[i];
		pairsort[i].second=b[i];
	}

	sort(pairsort,pairsort+n);

	for(int i=0;i<n;i++){
		a[i]=pairsort[i].first;
		b[i]=pairsort[i].second;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    ll s;	int n;
    cin >> s >> n;

    int arr[n+10],arr2[n+10];
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    	cin >> arr2[i];
    }

   	sort_based_on_one(arr,arr2,n);

   	bool cont=true;
   	for(int i=0;i<n;i++){
   		if(s<=arr[i]){
   			cont=false;
   			break;	
   		}
   		else	s+=arr2[i];
   	}

   	(cont) ? cout << "YES\n":cout << "NO\n";
}
