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
   	int n;
   	ll total_ice_cream,x;

   	cin >> n >> total_ice_cream;

   	int distressed_kids=0;
   	char pos_or_neg;
   	while(n--){
   		cin >> pos_or_neg >> x;

   		if(pos_or_neg=='+')	total_ice_cream+=x;
   		else{
   			if(x>total_ice_cream)	distressed_kids++;
   			else					total_ice_cream-=x;
   		}
   	}

   	cout << total_ice_cream << ' ' << distressed_kids << '\n';
}
