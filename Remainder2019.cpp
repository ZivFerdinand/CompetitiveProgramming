#include <iostream>
long long batas=99999999999999999;
using namespace std;
int main(){
  long long a,b;
  bool lanjut=true;
  	cin >> a >> b;
  
  if((b-a)>=2019){
    cout << 0 <<  endl;
    lanjut=false;
  }
  else{
     for(long long i=a;i<=b;i++){
      	 for(long long j=i+1;j<=b;j++){
            long long test=(i*j)%2019;
          	if(test==0){
				cout << 0 << endl;
              	lanjut=false;
              	break;
            }
           	else if(test<batas){
                	batas=test;
            }
         }
         if(!lanjut){
         	break;
		 }
     }
  }
  if(lanjut){
   cout << batas << endl; 
  }
}
