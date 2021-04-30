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

   	int x=n/2;
   	for(int i=0;i<n;i++){
   		string str;
   		for(int j=0;j<x;j++){
   			str+="*";
   			cout << '*';
   		}
   		for(int j=0;j<n-(x*2);j++){
   			cout << 'D';
   		}
   		cout << str;
   		cout << '\n';
		
		if(i<n/2)		x--;
		else			x++;
   	}
}	 