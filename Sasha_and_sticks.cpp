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

    if((n/k)%2!=0){
    	cout << "YES\n";
    }
    else{
    	cout << "NO\n";
    }
}