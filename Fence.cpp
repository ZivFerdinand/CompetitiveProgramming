#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

ll arr[600000];

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	ll n,k,minus=0,take,minn=500000000;
   	ll total=0;
   	cin >> n >> k;

   	for(int i=0;i<n;i++){
   		cin >> arr[i];
   		total+=arr[i];
   		if(i>=k-1){
   			if(total<minn){
   				minn=total;
   				take=minus+1;
   			}
   			//cout << total << ' ' << i << '\n';
   			total-=arr[minus];
   			minus++;
   		}
   	}
   	cout << take << '\n';
}
/*
10
10
15
10


*/