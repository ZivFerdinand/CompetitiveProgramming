#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q;
   	cin >> q;

   	ll a,b;
   	while(q--){
   		cin >> a >> b;
   		if(a==b)
   			cout << 0;
   		else if(a>b)
   			((a-b)%2) ? cout << 2:cout << 1;
   		else
   			((b-a)%2) ? cout << 1:cout << 2;
   		cout << '\n';
   	}
}
/*
wajib
+ dg ganjil
- dg genap

2 4
*/