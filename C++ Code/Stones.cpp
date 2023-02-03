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

string ent="\n";
int main(){
   	ios_base::sync_with_stdio(false);
   	int q;
   	cin >> q;

   	int a,b,c;
   	while(q--){
   		cin >> a >> b >> c;

   		ll total=0;
   		if(!b)	cout << 0 << ent;
   		else{
   			int rand=min(b,c/2);
   			b-=rand;
   			c-=rand*2;
   			total+=rand+(rand*2);

   			rand=min(a,b/2);
   			total+=rand+(rand*2);
   			cout << total << '\n';
   		}
   	}
}
/*



*/