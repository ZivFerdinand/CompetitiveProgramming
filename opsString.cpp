#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
	string s1,s2,s3,s4,q,q1,t,t2;
	int dahbreak=0;
	cin >> s1 >> s2 >> s3 >> s4;
//	blahaloajlfnajfn
//	0123456789
//	i==3 -- 6
	int s1_len=s1.size();
	int s2_len=s2.size();
	int s3_len=s3.size();
	int s4_len=s4.size();
	int k_akhir=0;
//	
	for(int i=0;i<s1_len;i++){
		q.clear();
		for(int j=i;j<s2_len+i;j++){
			q+=s1[j];
		}
		if(q==s2){
			s1.erase(i,s2_len);

			s1_len=s1.size();
			break;
		}
	}

// 	accespampd
// spam
// cep
// te
// accept



	for(int i=0;i<s1_len;i++){	
		q1.clear();
		t.clear();
		t2.clear();
		for(int k=i;k<s3_len+i;k++){
			if(s1[k]>=97 && s1[k]<=123 || s1[k]>=65 && s1[k]<=91){
				q1+=s1[k];
			}
			k_akhir=k;
		}
		if(q1==s3){
			for(int l=0;l<=k_akhir;l++){
				t+=s1[l];
			}
			for(int m=k_akhir+1;m<s1_len;m++){
				t2+=s1[m];
			}
			s1=t+s4+t2;
			s1_len=s1.size();
			dahbreak=100;
			break;
		}
		if(dahbreak==100){
			break;
		}
	}

	for(int i=0;i<s1_len-s2_len+s4_len+100;i++){
		if(s1[i]>=97 && s1[i]<=123 || s1[i]>=65 && s1[i]<=91){
			cout << s1[i];
		}
		else{
			break;
		}
	}
	cout << endl;
}
