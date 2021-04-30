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
   	cin >> n;

   	n=(n*2)-1;
   	for(int i=n-2;i>=1;i-=2){
   		n+=i*2;
   	}

   	cout << n << '\n';
}	 