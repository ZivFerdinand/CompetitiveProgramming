#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int a[4] , kali=0 ;
 char c ;
 for(int i=0; i<4; i++)
 { cin >> a[i]; }
 int ans=a[0];
 for(int i=0; i<3; i++)
 {
  cin >> c ;
  if(c == '*') kali++ ;
 }
 sort(a , a+4);
 int Kali = kali ;
 for(int i=1; i<4; i++)
 {
  if(kali) {ans*=a[i]; kali--;}
  else ans+=a[i];
 }
 int hem=a[0]*a[1]+a[1]*a[2];
 if( hem < ans && Kali==2)
 {
  cout << hem << endl;
 }
 else if(!a[0]) cout << "0\n";
 else cout<<ans<<endl;
}