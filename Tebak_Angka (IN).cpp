#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a=50;

   cout << "50\n";

   string s;
   while(getline(cin,s)){
   		if(s=="BENAR"){
   			break;
   		}
   		else if(s=="LEBIH KECIL"){
   			cout << --a << endl;
   		}	
   		else if(s=="LEBIH BESAR"){
   			cout << ++a << endl;
		}

   }
}


