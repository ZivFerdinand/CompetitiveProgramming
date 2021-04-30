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
   	int t;
   	cin >> t;

   	int h,m;
   	while(t--){
   		cin >> h >> m;
   		cout << (24*60)-(h*60)-m << '\n';
   	}
}