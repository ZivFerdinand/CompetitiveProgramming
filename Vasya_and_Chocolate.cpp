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

 	ll s,a,b,c;
 	while(q--){
 		ll total=0;
 		cin >> s >> a >> b >> c;
 		total+=s/c;
 		total+=(total/a)*b;
 		cout << total << '\n';
 	}  	
}