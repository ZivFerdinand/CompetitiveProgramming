#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <sstream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	int q;
	cin >> q;
	
	string s,s1;
	
	int rand=1;

	while(q--){
		cin >> s >> s1;

		int s_len=s.size();
		int s1_len=s1.size();
		if(s1_len > s_len)
		{
			swap(s,s1);
			swap(s1_len,s_len);
		}
			char c;
			for(int i=(s_len-s1_len);i<s_len;i++){
					c=s[i];
					int a=(int) c;
					a-=48;

					c=s1[i-(s_len-s1_len)];
					int b=(int) c;
					b-=48;

					int sum=(a+b)%10;
					
					s[i]=sum+48;
			}
			stringstream z(s);
			long long integer=0;
			z >> integer;
			
			cout << "Case #" << rand << ": " << integer << '\n';
			rand++;
	}
}

