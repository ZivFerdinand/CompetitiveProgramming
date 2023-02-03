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

   	ll x,y;
   	while(q--){
   		cin >> x >> y;
   		cout << x << ' ' << x*2 << '\n';
   	}
}