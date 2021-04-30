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

	string s;
	cin >> s;

	int even_so_far[n+10],even=0;
	for(int i=0;i<n;i++){
		if(((int)s[i]-48) % 2 == 0){
			even++;
		}
		even_so_far[i]=even;
	}

	ll cnt=0;
	for(int i=0;i<n;i++){
		if(((int)s[i]-48) % 2 == 0){
			cnt+=1+(even-even_so_far[i]);
		}
		else{
			cnt+=(even-even_so_far[i]);
		}
	}

	cout << cnt << '\n';
}
