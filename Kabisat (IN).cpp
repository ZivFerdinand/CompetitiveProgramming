#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
#define ld long double 
using namespace std;

int main(){ 
  	ios_base::sync_with_stdio(false); 
   	cin.tie(NULL);    cout.tie(NULL);
   	bool k,last=-4;
    int tahun;
    for(int i=0;i<2050;i++){
    tahun=i;
    k=false;
    if (tahun%400==0){
        k=true;
    } else if ((tahun%400!=0) && (tahun%100==0)){
        k=false;
    } else if ((tahun%400!=0) && (tahun%100!=0)){
               if (tahun%4==0){
        k=true;
        }
    } else if ((tahun%400!=0) && (tahun%100!=0)){
        if (tahun%4!=0){
        k=false;
        }
    }
    if(k){
    	if(abs(i-last)!=4) cout << i << ' ' << last;
    	cout<<endl;
    	last=i;
    }

    }

}
/*

*/