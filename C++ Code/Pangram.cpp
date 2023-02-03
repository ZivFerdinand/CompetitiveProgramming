#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int s_len = s.length();

	if(n<26){
		cout << "NO\n";
	}
	else{
		int differ=0;
		
		bool used[200];
		memset(used,false,sizeof used);
		
		for(int i=0;i<n;i++){
			char rand = s[i];
			s[i]=tolower(rand);
			
			if(!used[(int) s[i]]){
				used[(int) s[i]]=true;
				differ++;
			}
		}

		if(differ>=26){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}
