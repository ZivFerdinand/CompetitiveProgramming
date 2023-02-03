#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	string a,b;
   	cin >> a >> b;

   	char x=a[0],y=b[0];
   	int x1=(int)a[1]-48,y1=(int)b[1]-48;

   	int r_or_l=abs((int)x-(int)y);
   	int u_or_d=abs(y1-x1),n=max(u_or_d,r_or_l);

   	cout << n << '\n';
   	for(int i=0;i<n;i++){
   		if(x<y && r_or_l){
   			r_or_l--;
   			cout << 'R';
   		}
   		else if(x>y && r_or_l){
   			r_or_l--;
   			cout << 'L';
   		}
   		if(x1<y1 && u_or_d){
   			u_or_d--;
   			cout << 'U';
   		}
   		else if(x1>y1 && u_or_d){
   			u_or_d--;
   			cout << 'D';
   		}
   		cout << '\n';
   	}
}
/*
char x < char y 
	R;
else
	L;

int x1 < int y1
	U;
else
	D;


*/