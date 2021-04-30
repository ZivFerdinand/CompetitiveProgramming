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
   	ll n,s;
   	cin >> n >> s;

   	ll coins=s/n;
   	if(s%n){
   		coins++;
   	}

   	cout << coins << '\n';
}