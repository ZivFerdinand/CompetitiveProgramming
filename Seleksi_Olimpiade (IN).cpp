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
	int t;
	cin >> t;

	while(t--){
		int orang,jumlah_lulus;
		cin >> orang >> jumlah_lulus;

		string s,rand;	ll x1,x2,x3;
		cin >> s;

		ll arr[orang+5],nilai_lulus;
		for(int i=0; i<orang; i++){
			cin >> rand >> x1 >> x2 >> x3;
			arr[i]		= (x3*pow(10,7)) + (x2*pow(10,3)) + (x1);

			if(s==rand){
				nilai_lulus=arr[i];
			}
		}

		sort(arr,arr+orang);
		bool done=false;
		for(int i = orang-1; i>orang-1-jumlah_lulus ;i--){
			if(arr[i] == nilai_lulus){
				cout << "YA\n";
				done=true;
				break;
			}
		}

		if(!done)	cout << "TIDAK\n";
	}
}