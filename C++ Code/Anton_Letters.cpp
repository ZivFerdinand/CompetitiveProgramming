#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s;
	getline(cin,s);

	int s_len=s.size();
	bool used[200];

	memset(used,false,sizeof used);

	int cnt=0;

	for(int i=1;i<s_len;i+=3){
		if(s[i]>=97 && s[i]<=123){
			if(!used[(int)s[i]]){
				cnt++;
				used[(int)s[i]]=true;
			}
		}
	}

	cout << cnt << endl;
}
