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

	string s;
	while(q--){
		cin >> s;
		if(s[0]==s[s.size() - 1]){
			cout << "NO\n";
		}
		else{
			int open=0;
			for(int i=0;i<s.size();i++){
				if(s[i]==s[0]) //kalo huruf ke i samo dg huruf pertamo brarti langsung bukak
					open++;
				else if(s[i]==s[s.size()-1]) //kalo samo dg huruf terakhir lsg tutup
					open--;
				else
					open--; //ini kalo dak samo dg kduony, coba tutupin dulu, difor berikutny coba buka
				if(open<0)
					break;
			}
			if(open==0){
				cout<<"YES\n";
			}
			else{
				open=0;
				for(int i=0;i<s.size();i++){
					if(s[i]==s[0])
						open++;
					else if(s[i]==s[s.size()-1])
						open--;
					else
						open++;
					if(open<0)
					break;
				}
				(open==0) ? cout << "YES\n":cout << "NO\n";
			}
		}
	}
}
/*
())(()
*/
