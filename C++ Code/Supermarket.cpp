#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n;
   	double k,a,b,minn;

   	cin >> n >> k;
   	for(int i=0;i<n;i++){
   		cin >> a >> b;
   		if(i==0)
   			minn=(k*a)/b;
   		minn=min((k*a)/b,minn);
   	}
   	cout << fixed << setprecision(8) << minn;
}
/*



*/