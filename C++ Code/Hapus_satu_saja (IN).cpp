#include <iostream>
using namespace std;
int main(){
	string s1,s2;	int test = 0;
	cin >> s1 >> s2;

	int s_len = s1.size();

	for(int i=0;i<s_len;i++){
		string q=s1;
		q.erase(i,1);
		if(q==s2){
			cout << "Tentu saja bisa!" << endl;
			test = 1;
			break;
		}
		else{
			continue;
		}
		q.clear();
	}	
	if(test==0){
		cout << "Wah, tidak bisa :(" << endl;
	}
}
