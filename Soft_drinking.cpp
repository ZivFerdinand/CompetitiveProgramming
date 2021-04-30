#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int n, k, l, c, d, p, nl, np;
   	cin >>  n >> k >> l >> c >> d >> p >> nl >> np;
   	cout << min((k*l)/nl,min(c*d,p/np))/n << '\n';
}
/*



*/