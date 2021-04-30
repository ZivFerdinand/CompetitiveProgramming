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
   	int q;
   	cin >> q;

   	int n,x,a,b;
   	while(q--){
   		cin >> n >> x >> a >> b;

   		if(a>b)			swap(a,b);
   		for(int i=a;i>1;i--){
   			if(x<=0)	break;
   			a--;
   			x--;
   		}
   		for(int i=b;i<n;i++){
   			if(x<=0)	break;
   			b++;
   			x--;
   		}
   		cout << abs(a-b) << '\n';
   	}
}