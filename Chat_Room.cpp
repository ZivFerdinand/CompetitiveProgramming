#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
	int h,e,l,o;
	h=e=l=o=0;

	for(int i=0;i<s_len;i++){
		if(s[i]=='h' && e==0 && l==0 && o==0){
			h++;
		}
		else if(s[i]=='e' && h>0 && l==0){
			e++;
		}
		else if(s[i]=='l' && e>0 && h>0 && o==0){
			l++;
		}
		else if(s[i]=='o' && e>0 && h>0 && l>1){
			o++;
		}
	}
	if(o>0){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
}
/*
nc
*/
