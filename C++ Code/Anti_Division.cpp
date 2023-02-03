#include <iostream>
using namespace std;

// __gcd(a,b) in Algorithm instead of creating own function

long long FPB(long long x,long long y){
	if(y==0){
		return x;
	}
	else{
		return FPB(y,x%y);
	}
}

int main(){
	long long a,b,x,y;
	long long i=1;
	long long itung=0;
  cin >> a >> b >> x >> y;
  
  long long cari_x=(b/x)-((a-1)/x);
  long long cari_y=(b/y)-((a-1)/y);
  long long xx=((b-a)+1)-(cari_x+cari_y);
  
	long long FPB_2=FPB(x,y);
	
	long long KPK=FPB_2*((x/FPB_2))*((y/FPB_2));

//	while(KPK*i>=a && KPK*i<=b){
//		if(KPK*i<=b && KPK*i>=a){
//			itung++;
//		}
//		i++;
//	}
	
	itung=(b/KPK)-((a-1)/KPK);

	cout << xx+itung << endl;
	
}



