#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n;
   	ld l,arr[1010];
   	ld maxx=0;
   	cin >> n >> l;

   	for(int i=0;i<n;i++)
   		cin >> arr[i];

   	sort(arr,arr+n);

   	for(int i=0;i<n-1;i++)
   		if(abs(arr[i]-arr[i+1])/2>maxx)
   			maxx=abs(arr[i]-arr[i+1])/2;

   	maxx=max(maxx,max(l-arr[n-1],arr[0]));
   	cout << fixed << setprecision(10) << maxx << '\n';
}