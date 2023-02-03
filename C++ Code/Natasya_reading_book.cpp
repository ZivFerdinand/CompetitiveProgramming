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

	int first[n+10],end[n+10];
	for(int i=0;i<n;i++){
		cin >> first[i];
		cin >> end[i];
	}

	int k;
	cin >> k;

	for(int i=0;i<n;i++){
		if(k>=first[i] && k<=end[i]){
			cout << n-(i) << '\n';
			break;
		}
	}
}
