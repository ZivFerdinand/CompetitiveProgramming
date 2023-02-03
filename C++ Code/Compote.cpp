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
   	int a,b,c;
   	cin >> a >> b >> c;

   	for(int i=1;i<=a;i++){
   		if(i>a || (2*i)>b || (4*i)>c){
   			cout << (i-1)+(2*(i-1))+(4*(i-1)) << '\n';
   			break;
   		}	
   		if(i==a){
   			i++;
   			cout << (i-1)+(2*(i-1))+(4*(i-1)) << '\n';
   			break;
   		}
   	}
}	 