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
	int q;
	cin >> q;

	int buns,chicken,beef,chicken_p,beef_p;
	while(q--){
		cin >> buns >> beef >> chicken;
		cin >> beef_p >> chicken_p;

		int rand,total;	buns/=2;
		rand=total=0;
		
		if(chicken_p>beef_p || chicken_p==beef_p){
			rand=min(chicken,buns);
			buns-=rand;
			total+=chicken_p*rand;

			rand=min(beef,buns);
			buns-=rand;
			total+=beef_p*rand;
		}	
		else if(chicken_p<beef_p){
			rand=min(beef,buns);
			buns-=rand;
			total+=beef_p*rand;

			rand=min(chicken,buns);
			buns-=rand;
			total+=chicken_p*rand;
		}

		cout << total << '\n';
	}
}
