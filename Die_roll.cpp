#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int a,b;
   	cin >> a >> b;

   	cout << (6-max(a,b)+1)/__gcd(6-max(a,b)+1,6) << '/' << 6/__gcd(6-max(a,b)+1,6);
}
/*

gcd=fpb

*/
