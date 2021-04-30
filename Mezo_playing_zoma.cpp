#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	string s;
   	int s_len;
   	cin >> s_len;
   	cin >> s;

   	int a=0,b=0,c=0,d=0,res,rand;
   	for(int i=0;i<s_len;i++){
   		(s[i]=='L') ? a++:b++;
   	}
   	a*=-1;
   	cout << b-a+1;
}
/*



*/