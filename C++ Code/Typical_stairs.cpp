#include <iostream>
#include <cstring>
using namespace std;

bool broke[100010];
int fq[100010];
int modulo=1000000007;

int func(int a){
	if(broke[a]!=false){
		return 0;
	}
	if(a==0){
		return 1;
	}
	if(a==1){
		return 1;
	}
	if(a<0){
		return 0;
	}
	if(fq[a]!=-1)
		return fq[a];
	else{	
		fq[a]=(func(a-1)+func(a-2))%modulo;
		return fq[a];
	}
}

int main(){
	int n,m,x;
	cin >> n >> m;

	memset(fq,-1,sizeof fq);

	for(int i=m-1;i>=0;i--){
		cin >> x;
		broke[x]=true;
	}

	int tt = func(n);

	cout << tt << endl;
}
