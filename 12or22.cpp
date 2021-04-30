#include <iostream>
using namespace std;
int main(){
 string s;
  int itung=0;
  cin >> s;
  
  for(int i=0;i<4;i++){
    if(s[i]=='2'){
      itung++;
    }
  }
  cout << itung << endl;
}
