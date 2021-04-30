#include <iostream>
using namespace std;
int main()
{
	int s_len;
	cin >> s_len;

	string s;
	cin >> s;

	int arr[110];
	int j=0;
	int total_black=0;

	for(int i=0;i<s_len;i++){
		if(s[i]=='B'){
			total_black++;
			if(i==s_len-1){
				arr[j]=total_black;
				total_black=0;
				j++;
			}
		}
		else if(s[i]=='W' && s[i-1]=='B'){
			arr[j]=total_black;
			total_black=0;
			j++;
		}
	}

	cout << j << endl;
	for(int i=0;i<j;i++){
		if(i<j-1){
			cout << arr[i] << ' ';
		}
		else{
			cout << arr[i] << endl;
		}
	}
	return 0;
}
