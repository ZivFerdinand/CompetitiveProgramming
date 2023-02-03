#include <iostream>
using namespace std;
int main(){
	long long arr[5];
	cin >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	string s;
	cin >> s;

	int s_len=s.size();

	int total=0;

	for(int i=0;i<s_len;i++){
		int a=((int)s[i])-48;
		total+=arr[a];
	}
	cout << total << endl;
}	
