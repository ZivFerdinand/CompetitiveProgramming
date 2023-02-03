#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;

int main(){ 
   	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);   cout.tie(NULL);
   	int q;
   	cin >> q;

   	string s;
   	while(q--){
   		cin >> s;
   		for(int i=0;i<s.size();i+=2)
   			cout << s[i];
   		cout << s[s.size()-1] << '\n';
   	}
}
/*


*/