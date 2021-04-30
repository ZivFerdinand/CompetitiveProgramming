#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	int arr[n+10];
	int i=0,group=0;

	while(n--){
		cin >> arr[i];

		if(i==0){
			i++;
			group++;
			continue;
		}
		else{
			if(arr[i]==arr[i-1]){
				continue;
			}
			else{
				group++;
			}
			i++;
		}
	}
	cout << group << endl;
}
