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
 	ll n,k;
 	cin >> n >> k;

 	ll x,cnt=0;
 	for(int i=0;i<n;i++){
 		cin >> x;
 		if(x+k<=5){
 			cnt++;
 		}
 	}

 	cout << cnt/3 << '\n';
}
