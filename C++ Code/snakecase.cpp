#include <cctype>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	string s,q,q1;
	int test=0;
	getline(cin,s);

	int s_len=s.size();
	int old_len=s.size();
	char c;
	
	for(int i=0;i<s_len;i++){
		q.clear();
		q1.clear();
		if(s[i]=='_'){
			c=s[i+1];
			s[i]=(toupper(c));
			s.erase(i+1,1);
			test-=1;
		}
		else if(s[i]>=65 && s[i]<=91){
			c=s[i];

			for(int j=0;j<i;j++){
				q+=s[j];
			}
			for(int k=i+1;k<=s_len;k++){
				q1+=s[k];
			}
			s.clear();
			c=(tolower(c));
			s=q+'_'+c+q1;
			s_len=s.size();
			test+=1;
		}
	}
	
	for(int i=0;i<old_len+test;i++){
		if(s[i]==' ' || s[i]==32){
			continue;
		}
		else{
			cout << s[i];
		}
	}
	cout << endl;
}
