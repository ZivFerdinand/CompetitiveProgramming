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
 	int a,b;
 	cin >> a >> b;

 	for(int i=a;i<=b;i++){
 		bool available[150]={};
 		bool not_found=false;
 		string a=to_string(i);
 		int s_len=a.size();
 		for(int j=0;j<s_len;j++){
 			if(available[a[j]]==false){
 				available[a[j]]=true;
 			}
 			else{
 				not_found=true;
 				break;
 			}
 		}
 		if(!not_found){	cout << i << '\n'; return 0;}
 	}

 	cout << -1 << '\n';
}
