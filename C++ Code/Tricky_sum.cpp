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
int t;
ll n;
int main(){
   	ios_base::sync_with_stdio(false);
 	cin >> t;
 	while(t--){
 		cin >> n;

 		ll pref=0;
 		for(int i=0;i<n;i++){
 			if(pow(2,i)>n)	break;
 			pref+=pow(2,i);
 		}
 		ll total=0;
 		total+=((n+1)*(n))/2;
 		total-=pref*2;
 		cout << total << '\n';
 	}
}