#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int q,total;
	cin >> q;
	
	int test[10];

	while(q--){
		int n,x;
		cin >> n;

		test[0] = test[1] = test[2] = total = 0;

		for(int i=0;i<n;i++){
			cin >> x;
			x%=3;

			if(x==0){
				total++;
			}
			else if(xs==1){
				test[1]++;
			}
			else{
				test[2]++;
			}
		}
		int minimum=min(test[1],test[2]);
		total+=minimum;
		test[1]-=minimum;
		test[2]-=minimum;
		total+=test[1]/3;
		total+=test[2]/3;
		cout << total << endl;
	}
}
