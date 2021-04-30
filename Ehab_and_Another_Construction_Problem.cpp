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
 	int x;
 	cin >> x;

 	for(int i=1;i<=x;i++){
 		for(int j=i;j<=x;j++){
 			if(j%i==0 && j*i>x && j/i<x){
 				cout << j << char(32) << i << '\n';
 				return 0;
 			}
 		}
 	}
 	cout << -1 << '\n';
}