
#include <iostream>
using namespace std;
int main(){
  int n,x,y=0,itung=0;
  cin >> n >> x;
  int arr[n+10];
  int awal;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    if(i==0){
      y+=arr[i];
      awal=y;
      itung+=2;
    }
    else{
      y+=arr[i];
      if(y>x){
        break;
      }
      if(y%awal==0){
        itung++;
      }
      
      
    }
  }
  cout << itung << endl;
}
