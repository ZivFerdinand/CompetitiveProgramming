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

   	ll x,y;
   	int len=1;
   	int max_limit=1;
   	for(int i=0;i<n;i++){
   		cin >> x;
   		if(i>0){
   			if(x>y){
   				len++;
   				if(len>max_limit)	max_limit=len;
   			}
   			else{   				
   				len=1;
   			}
   		}
   		y=x;
   	}
   	cout << max_limit << '\n';
}	 