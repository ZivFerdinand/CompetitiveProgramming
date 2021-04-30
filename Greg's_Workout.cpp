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

string a="chest",b="biceps",c="back";

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int back=0,bicep=0,chest=0,x,cnt=0;
    for(int i=1;i<=n;i++){
    	cin >> x;
    	cnt++;
    	if(cnt==3){
    		back+=x;
    	}
    	else if(cnt==2){
    		bicep+=x;
    	}
    	else{
    		chest+=x;
    	}

    	if(cnt==3){
    		cnt=0;
    	}
    }

    if(chest>=bicep && chest>=back){
		cout << a;
	}
	else if(bicep>=chest && bicep>=back){
		cout << b;
	}
	else{
		cout << c;
	}

	cout << '\n';
}