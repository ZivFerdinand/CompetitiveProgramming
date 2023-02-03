#include <cstring>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	for(int i=n+1;i<=10000;i++){
		string s = to_string(i);

		bool wrong_ans=false;
		bool used[100];
		memset(used,false,sizeof used);

		for(int j=0;j<4;j++){
			if(!used[(int)s[j]]){
				used[(int)s[j]]=true;
			}
			else{
				wrong_ans=true;
				break;
			}
		}

		if(!wrong_ans){
			cout << s << endl;
			break;
		}
		s.clear();
	}
}
