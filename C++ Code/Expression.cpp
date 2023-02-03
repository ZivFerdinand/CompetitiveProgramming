//1+2*3=7
//1*(2+3)=5
//1*2*3=6
//(1+2)*3=9
#include <array>
#include <iostream>
using namespace std;
int main(){
	int a,b,c;

	cin >> a >> b >> c;

	int arr[10];
	
	arr[1]=a*(b+c);
	arr[2]=c*(a+b);
	arr[3]=b+(a*c);
	arr[4]=c+(a*b);
	arr[5]=a+(b*c);
	arr[6]=a+b+c;
	arr[7]=a*b*c;
	
	

	int max_limit=0;

	for(int i=1;i<8;i++){
//		cout << arr[i] << endl;
		if(arr[i]>max_limit)
			max_limit=arr[i];
		
	}

	cout << max_limit << endl;
}
