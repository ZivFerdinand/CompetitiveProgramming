#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long 
#define ld long double 
using namespace std;
ll a,b,k,x,cnt=0;
ll f(ll x){
	cnt++;
	if(cnt==k)
		return abs((a*x)+b);
	else
		return f(abs((a*x)+b));
}

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);    cout.tie(NULL);
   	cin >> a >> b >> k >> x;
   	cout << f(x) << '\n';
}
/*
1 1 2 1
f(f(2))
f(3)
4

*/