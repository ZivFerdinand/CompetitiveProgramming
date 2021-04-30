#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin >> n;

  int min=10010;

  int arr[n+10];

  int s1=n/2;
  int s2=(n/2);

  bool bolehloop=false;


  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  for(int i=0;i<n;i++){
    int Total=0,Total1=0;
    if(bolehloop==false){
      if(s1==0){
        bolehloop=true;
      }  
      for(int j=0;j<=s1;j++){
        Total+=arr[j];
      }
      for(int j=s1+1;j<n;j++){
        Total1+=arr[j];
      }
      if(abs(Total-Total1)<=min){
        min=abs(Total-Total1);
      }
      s1--;
    }
    Total=0;
    Total1=0;
    if(bolehloop==true){
      for(int j=0;j<=s2;j++){
        Total+=arr[j];
      }
      for(int j=s2+1;j<n;j++){
        Total1+=arr[j];
      }
      if(abs(Total-Total1)<min){
        min=abs(Total-Total1);
      }
      s2++;
    }
  }

  cout << min << endl;

}
