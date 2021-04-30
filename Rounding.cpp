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
   	ll n;
   	cin >> n;

   	ll i,j;
   	i=j=n;
   	while(i%10!=0){
   		i++;
   	}
   	while(j%10!=0){
   		j--;
   	}

   	(abs(i-n)<abs(j-n)) ? cout << i:cout << j;
   	cout << '\n';
}	 