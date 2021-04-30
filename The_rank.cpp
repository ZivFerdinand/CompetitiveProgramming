#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
#include <conio.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	int sum=0,same,rank=1;
	int a,b,c,d;
	for(int i=0;i<n;i++){
		cin >> a >> b >> c >> d;

		sum = a+b+c+d;

		if(!i)
			same=sum;
		if(sum>same)
			rank++;
	}
	cout << rank << '\n';
}
