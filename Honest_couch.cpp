#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;


int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q,n,minn;
   	cin >> q;

   	int arr[100];

   	while(q--){
   		cin >> n;
   		minn=2000;
   		for(int i=0;i<n;i++)
   			cin >> arr[i];
   		sort(arr,arr+n);
   		for(int i=1;i<n;i++)
   			minn=min(arr[i]-arr[i-1],minn);
   		cout << minn << '\n';
   	}
}
/*



*/