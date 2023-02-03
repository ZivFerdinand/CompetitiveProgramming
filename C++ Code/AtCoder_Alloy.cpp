#include <iostream>
using namespace std;
int main(){
  int n,itung=0;
  cin >> n;
  
  int w,h,w1,h1;
  cin >> w >> h;
  
  for(int i=0;i<n;i++){
    cin >> w1 >> h1;
    if(w1>=w && h1>=h){
     itung++; 
    }
  }
  cout << itung << endl;
}
