#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n;
   	double x;
   	cin >> n >> x;

   	tuple<double,double,double> arr[1010];
   	for(int i=0;i<n;i++)
   		cin >> get<1>(arr[i]);
   	for(int i=0;i<n;i++){
   		cin >> get<2>(arr[i]);
   		get<0>(arr[i])=get<2>(arr[i])/get<1>(arr[i]);
   	}
   	sort(arr,arr+n);

   	/* 	0->harga_per_kilo 
   	 	1->Wi_Kg 
   	 	2->Ci_Rp
   	*/

   	int take;
   	double price=0;
   	for(int i=n-1;i>=0;i--){
   		take=min(get<1>(arr[i]),x);
   		price+=take*get<0>(arr[i]);
   		x-=take;
   		if(!x)
   			break;
   	}
   	cout << fixed << setprecision(5)<< price << '\n';
}
/*
<0>	3 1.5 1 4 0.5
<1?	3 2   4 1 6
<2>	9 5   4 4 3




*/