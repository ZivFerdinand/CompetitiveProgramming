#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	long long total_a=0,total_b=0,total_c=0;
	int a,b,c;

	while(n--){
		cin >> a >> b >> c;
		total_a+=a;
		total_b+=b;
		total_c+=c;
	}
	if(total_a==0 && total_c==0 && total_b==0){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
}
