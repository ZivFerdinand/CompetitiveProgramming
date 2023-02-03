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

   	string handle;
   	int bef_score,aft_score,cnt=0;
   	while(q--){
   		cin >> handle >> bef_score >> aft_score;

   		if(bef_score>2399 && (aft_score>bef_score)){
   			cnt++;
   		}
   		if(cnt>0){
   			cout << "YES\n";
   			return 0;
   		}
   	}
   	if(cnt>0){
   		cout << "YES\n";
   		return 0;
   	}
   	cout << "NO\n";
}