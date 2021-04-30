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

   	ll n,x;
   	while(q--){
   		cin >> n >> x;
   		n/=2;
   		cout << 2*x << '\n';
   	}
}