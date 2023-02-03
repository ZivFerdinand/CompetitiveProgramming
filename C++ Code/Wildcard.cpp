#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string s,str,test1,test2,q,q1,kosong;
	kosong.clear();
	q.clear();
	q1.clear();
	cin >> s;
	int n,s_len=s.size(),loc_star=-1,kondisi;

	cin >> n;

	for(int i=0;i<s_len;i++){
		if(s[i]=='*'){
			loc_star=i;
		}
		if(s[i]!='*' && loc_star==-1){
			q+=s[i];

		}
		if(s[i]!='*' && loc_star!=-1){
			q1+=s[i];
		}
	}

	if(q==kosong && q1==kosong){
		kondisi=0;
		// *
	}
	else if(q1==kosong && q!=kosong){
		kondisi=1;
		q.erase(q.size(),1);
		//	mal*
	}
	else if(q==kosong && q1!=kosong){
		kondisi=2;
		//	*am
	}
	else if(q!=kosong && q1!=kosong){
		kondisi=3;
		test1=s;
		test2=s;
		test1.erase(loc_star,s_len-loc_star);
		test2.erase(0,loc_star+1);
		//	mal*am
	}
	

	if(kondisi==0){
		for(int i=0;i<n;i++){
			cin >> str;
			cout << str << endl;
			str.clear();
			//	DONE
		}
	}
	if(kondisi==1){
		string temp;
		for(int i=0;i<n;i++){
			cin >> str;
			for(int j=0;j<s_len-1;j++){
				temp+=str[j];
			}
			if(temp==q){
				cout << str << endl;
			}
			str.clear();
			temp.clear();
			// 	DONE
		}	
	}
	if(kondisi==2){
		string temp;
		for(int i=0;i<n;i++){
			cin >> str;
			int str_len=str.size();
			for(int j=str_len-q1.size();j<str_len;j++){
				temp+=str[j];
			}
			if(temp==q1){
				cout << str << endl;
			}	
			str.clear();
			temp.clear();
			// 	DONE
		}	
	}
	if(kondisi==3){
		string temp,temp1;
		for(int i=0;i<n;i++){
			cin >> str;
			int str_len=str.size();
			for(int j=0;j<loc_star;j++){
				temp+=str[j];
			}
			for(int k=str_len-test2.size();k<str_len;k++){
				temp1+=str[k];
			}
			if(temp==test1 && temp1==test2 && str_len>=(test1.size()+test2.size())){
				cout << str << endl;
			}
			str.clear();
			temp.clear();
			temp1.clear();
		}
		//	DONE
	}
}