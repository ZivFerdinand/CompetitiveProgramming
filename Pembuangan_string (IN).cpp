#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s,q,t;	int z=0;
	cin >> s >> t;

	int s_len = s.size();
	int t_len = t.size();

	for(int i=0;i<s_len;i++){
		int b=i;
		q.clear();
		if(s.empty()==1){
			break;
		}
		for(int j=i;j<i+t_len;j++){
			q+=s[j];
		}
		if(t==q || q==t){
			s.erase(i,t_len);
			i=0;
		}
		if(s.size() == t.size() && s==t){
			s.clear();
			i=0;
		}
	}
	s_len=s.size();
	for(int i=0;i<s_len;i++){
		int b=i;
		q.clear();
		if(s.empty()==1){
			break;
		}
		for(int j=i;j<i+t_len;j++){
			q+=s[j];
		}
		if(t==q || q==t){
			s.erase(i,t_len);
			i=0;
		}
		if(s.size() == t.size() && s==t){
			s.clear();
			i=0;
		}
	}
	// kerakemara
	cout << s;

	cout << endl;
}
