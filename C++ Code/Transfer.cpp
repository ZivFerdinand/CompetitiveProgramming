#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
 	
 	int a,b,c;
  	cin >> a >> b >> c;
  
  	int rand=c-(a-b);
  
	if(rand>=0)
    	cout << rand << '\n';
  	else
    	cout << 0 << '\n';
}