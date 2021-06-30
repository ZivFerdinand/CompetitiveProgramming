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
   	int n,m = 0;
   	cin >> n >> m;

   	int x,a,cnt=0;
   	bool turn[10010];
   	memset(turn,false,sizeof turn);
   	while(n--){
   		cin >> x;
   		while(x--){
   			cin >> a;
   			if(!turn[a]){
   				turn[a]=true;
   				cnt++;
   			}
   		}
   	}

   	(cnt==m)?cout << "YES\n":cout << "NO\n";
}	 

/*

*/
