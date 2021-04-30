#include <iostream>
using namespace std;
int main(){
 int a,b,c;
  int min=999;
  cin >> a >> b >> c;
  
  int arr[10];
  arr[0]=a+b;
  arr[1]=b+c;
  arr[2]=c+a;
  arr[3]=b+a;
  arr[4]=c+b;
  arr[5]=a+c;
  
  for(int i=0;i<6;i++){
    if(arr[i]<min){
		min=arr[i];
    }
  }
  cout << min << endl;
}
