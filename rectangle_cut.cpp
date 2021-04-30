#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double w,h,x,y;
	cin >> w >> h >> x >> y;
	
	if(w/2 == x && h/2 == y){
		cout << fixed << setprecision(6) << (w*h)/2 << ' ';
		cout << '1' << endl;
	}
	else{
		cout << fixed << setprecision(6) << (w*h)/2 << ' ';
		cout << '0' << endl;
	}

}
