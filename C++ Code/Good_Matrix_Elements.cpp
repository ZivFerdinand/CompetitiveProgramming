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

	int matrix[n+10][n+10];
	ll total=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> matrix[i][j];
		}
	}
	
	int j=1;
	for(int i=1;i<=n;i++){
		total+=matrix[i][j];
		total+=matrix[i][n-j+1];
		j++;
	}
	for(int i=1;i<=n;i++){
		total+=matrix[i][(n/2)+1];
		total+=matrix[(n/2)+1][i];
	}
	cout << total-(matrix[(n/2)+1][(n/2)+1]*3) << '\n';
}
