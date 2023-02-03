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
   	int n,d;
   	cin >> n >> d;

   	string lose;
   	for(int i=0;i<n;i++){
   		lose+="1";
   	}

   	bool w_l[150]={};
   	string str;
   	int max_limit=0;
   	int win=0;
   	for(int i=0;i<d;i++){
   		cin >> str;
   		if(str!=lose){
   			w_l[i]=1;
   			win++;
   		}
   		else{
   			w_l[i]=0;
   			win=0;
   		}

   		if(win>max_limit){
   			max_limit=win;
   		}
   	}
   	cout << max_limit << '\n';
}