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

   	int n,k;
   	while(q--){
   		cin >> n >> k;

   		int start_a=97;
   		int minimal=n/k;
   		int end_a=97+k-1;

   		int cnt[500]={};
   		for(int i=0;i<n;i++){
   			if(cnt[start_a]>=minimal && start_a+1<=end_a){
   				start_a++;
   			}
   			cnt[start_a]++;
   			cout << char(start_a);
   		}
   		cout << '\n';
   	}
}	 