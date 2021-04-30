#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
   	int q;
   	cin >> q;

   	ll l1,l2,r1,r2;
   	while(q--){
   		cin >> l1 >> r1 >> l2 >> r2;
   		
   		int a=(l1+r1)/2;
   		int b=(l2+r2)/2;

   		if(b==a)	b++;

   		cout << a << ' ' << b << '\n';
   	}
}
