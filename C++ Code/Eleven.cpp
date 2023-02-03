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

int arr[20];
int fibo(){
	arr[0]=0;	arr[1]=1;

    int x=2;
    while(x<17){
    	arr[x]=arr[x-1]+arr[x-2];
    	x++;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    fibo();
    
    int n;	cin >> n;
    for(int i=1;i<=n;i++){
    	bool fibo_check=false;
    	for(int j=1;j<17;j++){
    		if(arr[j]==i){
    			fibo_check=true;
    			break;
    		}
    	}

    	if(fibo_check)	cout << 'O';
    	else			cout << 'o';
    }
    cout << '\n';
}
