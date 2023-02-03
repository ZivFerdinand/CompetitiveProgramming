#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
 	int andrew,dmitry,michal;
 	int green,purple,black,rand;

 	cin >> andrew >> dmitry >> michal >> green >> purple >> black;

 	if(green>=andrew)	green-=andrew;
 	else{
 		cout << "NO\n";
 		return 0;
 	}

 	if(green+purple>=dmitry){
 		rand=min(green,dmitry);
 		dmitry-=rand;	green-=rand;

 		rand=min(purple,dmitry);
 		dmitry-=rand;	purple-=rand;
 	}
 	else{
 		cout << "NO\n";
 		return 0;
 	}

 	if(green+purple+black>=michal){
 		rand=min(green,michal);
 		michal-=rand;	green-=rand;

 		rand=min(purple,michal);
 		michal-=rand;	purple-=rand;

 		rand=min(black,michal);
 		michal-=rand;	black-=rand;
 	}
 	else{
 		cout << "NO\n";
 		return 0;
 	}

 	cout << "YES\n";
}
