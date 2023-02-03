#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  
  int cnt=0;
  
  for(int i=n;i>0;i--){
   	string s=to_string(i);
   	
    if(s.size()%2==1){
     	cnt++; 
    }
  }
  
  cout << cnt << '\n';
}
