#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s;
	cin >> s;

	int s_len=s.size();
	bool pernah[150];
	memset(pernah,false,sizeof pernah);
	int itung=0;

	for(int i=0;i<s_len;i++){
		if(pernah[(int) s[i]]==false){
			itung++;
			pernah[(int) s[i]]=true;
		}
	}

	if(itung%2==1){
		cout << "IGNORE HIM!\n";
	}
	else{
		cout << "CHAT WITH HER!\n";
	}
}
