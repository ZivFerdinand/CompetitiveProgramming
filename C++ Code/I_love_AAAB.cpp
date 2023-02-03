#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <queue>
#include <deque>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    int q;
    cin >> q;
    
    while(q--)
    {
        string s;
		cin>>s;

        bool ok = (s[s.size() - 1] == 'B');

        int sum=0;
		for (auto it:s){
			if (it=='A') sum++;
			else sum--;
			if (sum<0) ok=false;
		}
		
		if (ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
}

/*

*/