#include <iostream>
using namespace std;

long long fpb(long long x,long long y){
	if(y==0){
		return x;
	}
	else{
		return fpb(y,x%y);
	}
}

int main(){
	int a,b;
	int c,d;
	cin >> a >> b >> c >> d;

	long long FPB=fpb(b,d);

	long long KPK = FPB * ((b/FPB)*(d/FPB));

	long long e =(KPK/b)*a;
	long long f=(KPK/d)*c;

	long long g=e+f;

	FPB=fpb(g,KPK);

	if(FPB==1){
		cout << g << ' ' << KPK << endl;
	}
	else{
		g/=FPB;
		KPK/=FPB;
		cout << g << ' ' << KPK << endl;
	}
}
