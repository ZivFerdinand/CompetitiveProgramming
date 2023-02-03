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
	ios_base::sync_with_stdio(0);
	int x,y,z;
	cin >> x >> y >> z;

	char arr[5];	map<char,char> arr2;

	arr2['Z']='X';	arr2['X']='M';
	arr2['Y']='L';	arr2['W']='S';

	// Z='X'	Y='L'	X='M'	W='S'
	if(x>=25)		arr[0]='Z';	
	else if(x>18)	arr[0]='Z';	else if(x==18)arr[0]='Y';
	else if(x>14) 	arr[0]='Y';	else if(x==14)arr[0]='X';
	else if(x>10)	arr[0]='X';	else if(x==10)arr[0]='W';
	else			arr[0]='W';

	if(y>=100)		arr[1]='Z';
	else if(y>80)	arr[1]='Z';	else if(y==80)arr[1]='Y';
	else if(y>60) 	arr[1]='Y';	else if(y==60)arr[1]='X';
	else if(y>40)	arr[1]='X';	else if(y==40)arr[1]='W';
	else			arr[1]='W';

	if(z>=220)		arr[2]='Z';
	else if(z>180)	arr[2]='Z';	else if(z==180)arr[2]='Y';
	else if(z>120) 	arr[2]='Y';	else if(z==120)arr[2]='X';
	else if(z>90)	arr[2]='X';	else if(z==90) arr[2]='W';
	else			arr[2]='W';

	char limit='A';
	for(int i=0;i<3;i++){
		if(arr[i]>limit) 	limit=arr[i];
	}
	cout << arr2[limit] << '\n';
}
