#include <iostream>
using namespace std;
int main(){
	int n,m,p,z,o;	int a[105][105];	int b[105][105];	int c[105][105];	int sum[105][105];
	cin >> n >> m >> p;

	for(int i=0;i<105;i++){
		for(int j=0;j<105;j++){
			a[i][j] =0;
			b[i][j] =0;
			c[i][j] =0;
			sum[i][j] =0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> z;
			a[i][j] = z;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			cin >> o;
			b[i][j] = o;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			for(int k=0;k<m;k++){
				c[i][j] = a[i][k] * b[k][j];
				sum[i][j] = sum[i][j] + c[i][j];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cout << sum[i][j];
			if(j<p-1){
				cout << ' ';
			}
			else if(j==p-1){
				cout << endl;
			}
		}
	} 
}