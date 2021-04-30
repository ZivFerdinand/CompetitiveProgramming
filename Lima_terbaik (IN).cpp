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
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	int N;
	while(n--){
		cin >> N;
		int arr[N+10];

		for(int i=0;i<N;i++){
			cin >> arr[i];
		}
		sort(arr,arr+N);

		int total=0;
		for(int i=N-1;i>=N-5;i--){
			total+=arr[i];
		}

		cout << total << '\n';
	}
}
