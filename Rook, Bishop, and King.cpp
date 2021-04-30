#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int r1,c1,r2,c2;
   	cin >> r1 >> c1 >> r2 >> c2;

   	if(r1==r2 || c1==c2)
   		cout << 1;
   	else
   		cout << 2;
   	cout << ' ';

   	// bishop belom
   	if(abs(r1-r2)%2 != abs(c1-c2)%2)
   		cout << 0;
   	else{
   		if(abs(r1-r2)==abs(c1-c2))
   			cout << 1;
   		else
   			cout << 2;
   	}
   	cout << ' ';

   	cout << max(abs(r2-r1),abs(c1-c2));
}
/*



*/