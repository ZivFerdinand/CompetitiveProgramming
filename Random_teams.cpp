#include <iostream>
using namespace std;
int main(){
	long long n,m;
	cin >> n >> m;

	long long itung = (n-(m-1));
	long long maks=0;

	long long banyak_orang,banyak_pair;

//	7 3
//	1 1 5
	if(m==1){
		
		for(int i=itung-1;i>=1;i--){
			maks+=i;
		}
	}
	else if(itung%2==0){
		
		for(int i=itung-1;i>=1;i--){
			maks+=i;
		}
	}
	else{

		for(int i=itung-2;i>=1;i--){
			maks+=i;
		}
		maks++;
	}

	if(m==1){
		cout << maks << ' ';
	}
	else if((n%m)==0){
		for(int i=n/m - 1;i>=1;i--){
			banyak_pair+=i;
		}
		banyak_pair*=m;
		
		cout << banyak_pair << ' ';
	}
	else if(n%m!=0){

	}

	cout << maks << endl;
}

1 1 4	=	max		=	6
2 2 2	=	min 	=	3
1 3 2	=	-		=	4

