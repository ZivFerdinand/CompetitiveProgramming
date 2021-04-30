#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,arr[100],q=0,m;
	cin >> n;
	int y[2];
	y[0]=0;
	for(int i=0;i<100;i++){
		arr[i]=0;
	}
	for(int i=0;i<n;i++){
		cin >> a;
		arr[a]++;
		if(a>=q){
			q=a;
		}
	}
	for(int i=0;i<=q;i++){
		if(arr[i]==0){
			m=0;
			continue;
		}
		else if(arr[i]>0){
			m=arr[i]/2;
		}
		y[0]=y[0]+m;
	}
	cout << y[0];
}
