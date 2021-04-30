#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a=110;
	int i = 1;
	int total;
	int cnt=total=0;
	while(i+=2){
		total+=i;
		if(total>a){
			cout << cnt-1;
			break;
		}
		cnt++;
	}
}
