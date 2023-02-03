#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int a,b,n;
   	cin >> a >> b >> n;

   	while(true){
   		if(n<__gcd(a,n)){
   			cout << "1\n";
   			break;
   		}
   		n-=__gcd(a,n);
   		if(n<__gcd(b,n)){
   			cout << "0\n";
   			break;
   		}
   		n-=__gcd(b,n);
   	}
}
/*


*/